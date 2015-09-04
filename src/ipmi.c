/*
 * ipmi.c
 *
 *   AFCIPMI  --
 *
 *   Copyright (C) 2015  Henrique Silva  <henrique.silva@lnls.br>
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* FreeRTOS includes */
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"

/* C Standard includes */
#include "string.h"

/* Project includes */
#include "ipmb.h"
#include "ipmi.h"
#include "board_defs.h"
#include "led.h"

/* Local variables */
QueueHandle_t ipmi_rxqueue = NULL;

struct req_param_struct{
  ipmi_msg req_received;
  t_req_handler req_handler;
};

#define MAX_HANDLERS 20
t_req_handler_record handlers[MAX_HANDLERS]={
  {
    .netfn	 = NETFN_GRPEXT,
    .cmd	 = IPMI_PICMG_CMD_GET_PROPERTIES,
    .req_handler = ipmi_picmg_get_properties
  },
  {
    .netfn	 = NETFN_GRPEXT,
    .cmd	 = IPMI_PICMG_CMD_SET_FRU_LED_STATE,
    .req_handler = ipmi_picmg_set_led
  },
  {
    .netfn	 = NETFN_SE,
    .cmd	 = IPMI_SET_EVENT_RECEIVER_CMD,
    .req_handler = ipmi_se_set_receiver
  },
  {
    .netfn	 = NETFN_APP,
    .cmd	 = IPMI_GET_DEVICE_ID_CMD,
    .req_handler = ipmi_app_get_device_id
  }
};


void IPMITask ( void * pvParameters )
{
  ipmi_msg req_received;
  t_req_handler req_handler = (t_req_handler) 0;

  for ( ;; ){
    /* Received request and handler function must be allocated
       dynamically so they can be passed to the dynamically-created
       handler tasks. These tasks must also free the memory after use */

    if(xQueueReceive( ipmi_rxqueue, &req_received , portMAX_DELAY ) == pdFALSE){
      configASSERT(pdFALSE);
      continue;
    }

    req_handler = (t_req_handler) 0;
    req_handler = ipmi_retrieve_handler(req_received.netfn, req_received.cmd);

    if (req_handler != 0){
      
      /* TODO: create unique name for each created task, probably
	 related to netfn and command */
      struct req_param_struct *req_param = pvPortMalloc(sizeof(struct req_param_struct));
      req_param->req_received = req_received;
      req_param->req_handler = req_handler;
      
      xTaskCreate(IPMI_handler_task ,(const char*)"IPMB_handler_task", configMINIMAL_STACK_SIZE*2, req_param, IPMI_HANDLER_TASK_PRIORITY,  ( TaskHandle_t * ) NULL );
      
    }else{
      ipmb_error error_code;
      ipmi_msg response;
      /* If there is no function handler, use data from received
	 message to send "invalid command" response (IPMI table 5-2,
	 page 44). */

      response.completion_code = IPMI_CC_INV_CMD;
      response.data_len = 0;
      error_code = ipmb_send_response(&req_received, &response);

      configASSERT(error_code);
    }
  }
}


/** 
 * This task is created dynamically each time there is an IPMI request
 * demanding response. It receives a pointer to a struct contaning
 * both the function handler and the request to treated, and must free
 * this struct memory and itself before finishing.
 * 
 * @param pvParameters pointer to req_param_struct contaning
 * req_handler and req_received. This is dynamically allocated memory
 * and should be freed before quitting.
 */
void IPMI_handler_task( void * pvParameters){
  struct req_param_struct * req_param = (struct req_param_struct *) pvParameters;
  ipmi_msg response;
  ipmb_error response_error;

  /* Call user-defined function, give request data and retrieve required response */
  response = req_param->req_handler(req_param->req_received);

  response_error = ipmb_send_response(&(req_param->req_received), &response);

  /* In case of error during IPMB response, the MMC may wait for a
     new command from the MCH. Check this for debugging purposes
     only. */
  configASSERT(response_error);

  vPortFree(req_param);

  vTaskDelete(NULL);
}

/* Initializes the IPMI Dispatcher:
 * -> Initializes the IPMB Layer
 * -> Registers the RX queue for incoming requests
 * -> Creates the IPMI task
 */
void ipmi_init ( void )
{
    ipmb_init();
    ipmb_register_rxqueue( &ipmi_rxqueue );
    xTaskCreate( IPMITask, (const char*)"IPMI Dispatcher", configMINIMAL_STACK_SIZE*2, ( void * ) NULL, IPMI_TASK_PRIORITY, ( TaskHandle_t * ) NULL );
}


/** 
 * @brief Finds a handler associated with a given netfunction and command.
 * 
 * @param netfn 8-bit network function code
 * @param cmd 8-bit command code
 * 
 * @return Pointer to the function which will handle this command, as defined in the netfn handler list.
 */
t_req_handler ipmi_retrieve_handler(uint8_t netfn, uint8_t cmd){
  uint8_t cur_handler;
  t_req_handler handler = 0;

  for(cur_handler = 0; cur_handler < MAX_HANDLERS; cur_handler++)
    {

      if( (handlers[cur_handler].netfn == netfn) && \
	  (handlers[cur_handler].cmd == cmd))
	{
	  handler = handlers[cur_handler].req_handler;
	  break;
	}
    }

  return handler;
}

/** 
 * Handler for GET Device ID command as in IPMI v2.0 section 20.1 for
 * more information.
 * 
 * @param req 
 * 
 * @return 
 */
ipmi_msg ipmi_app_get_device_id ( ipmi_msg req ){
  ipmi_msg response;

  response.completion_code = IPMI_CC_OK;
  response.data_len = 0;

  /** \todo: several bits of hardcoded information. Organize it so it
      makes more sense and is easier to modify. */
  
  response.data[response.data_len++] = 0x0A; /* Dev ID */
  response.data[response.data_len++] = 0x02; /* Dev Rev */
  response.data[response.data_len++] = 0x05; /* Dev FW Rev UPPER */
  response.data[response.data_len++] = 0x50; /* Dev FW Rev LOWER */
  response.data[response.data_len++] = 0x02; /* IPMI Version 2.0 */
  response.data[response.data_len++] = 0x1F; /* Dev Support */
  response.data[response.data_len++] = 0x5A; /* Manufacturer ID LSB */
  response.data[response.data_len++] = 0x31; /* Manufacturer ID MSB */
  response.data[response.data_len++] = 0x00; /* ID MSB */
  response.data[response.data_len++] = 0x01; /* Product ID LSB */
  response.data[response.data_len++] = 0x01; /* Product ID MSB */

  return response;
}

/** @fn ipmi_msg ipmi_picmg_get_properties(ipmi_msg request)
 * 
 * @brief handler for GET Properties request. To be called by IPMI
 *  request handler, it must obey the predefined function signature
 *  and protocol. Check IPMI 2.0 table 3-11 for more information.
 *
 * @param[in] request Request to be handled and answered. Unused in
 *  this particular function.
 *
 * @return ipmi_msg Message with data, data length and completion code. 
 */
ipmi_msg ipmi_picmg_get_properties ( ipmi_msg req )
{
    ipmi_msg response;

    response.completion_code = IPMI_CC_OK;

    response.data_len = 0;
    /* Hardcoded response according to the  */
    response.data[response.data_len++] = IPMI_PICMG_GRP_EXT;
    response.data[response.data_len++] = IPMI_EXTENSION_VERSION;
    response.data[response.data_len++] = MAX_FRU_ID;
    response.data[response.data_len++] = FRU_DEVICE_ID;

    return response;
}

/** 
 * @brief Handler for "Set Event Receiver" command, as on IPMIv2 1.1
 * section 29.1.
 *
 * This handler should set (or reset) the address to which IPMI events
 * will be sent. Also, disable sending events if command 0xFF is received.
 * 
 * @param req Incoming request to be handled and answered.
 * 
 * @return ipmi_msg response with data, data_lenght and completion
 * code. Other fields will be completed by the system.
 */
ipmi_msg ipmi_se_set_receiver ( ipmi_msg req ){
  ipmi_msg response;
    
  /** \todo: actually enable/disable sending events*/
  response.completion_code = IPMI_CC_OK;
  response.data_len = 0;

  return response; 
}



/** @fn ipmi_msg ipmi_picmg_set_led(ipmi_msg request)
 * 
 * @brief handler for "Set FRU LED State"" request. Check IPMI 3.0
 * table 3-31 for more information.
 *
 * @param[in] request Request to be handled and answered. Contains
 * which LED should be set, how it should be set and other commands.
 *
 * @return ipmi_msg Response to be sent, must have data, data length
 * and completion code members filled.
 */
ipmi_msg ipmi_picmg_set_led ( ipmi_msg req )
{
  ipmi_msg response;
  
  /* TODO: actually implement set led funtion */

  response.completion_code = IPMI_CC_OK;

  response.data_len = 0;
  response.data[response.data_len++] = IPMI_PICMG_GRP_EXT;

  return response;
}

