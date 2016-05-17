/*
 *   openMMC -- Open Source modular IPM Controller firmware
 *
 *   Copyright (C) 2015-2016  Henrique Silva <henrique.silva@lnls.br>
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
 *
 *   @license GPL-3.0+ <http://spdx.org/licenses/GPL-3.0+>
 */

/* Project includes */
#include "port.h"
#include "rtm.h"
#include "rtm_user.h"
#include "pca9554.h"
#include "pin_mapping.h"
#include "hotswap.h"
#include "i2c_mapping.h"

/* RTM Management functions */

void rtm_enable_payload_power( void )
{
    gpio_set_pin_state(GPIO_EN_RTM_PWR_PORT, GPIO_EN_RTM_PWR_PIN, 1 );
    /* Debug LEDs */
    pca9554_write_pin( RTM_GPIO_LED_BLUE, 1 );
    pca9554_write_pin( RTM_GPIO_LED_GREEN, 0 );
}

void rtm_disable_payload_power( void )
{
    gpio_set_pin_state(GPIO_EN_RTM_PWR_PORT, GPIO_EN_RTM_PWR_PIN, 0 );
    /* Debug LEDs */
    pca9554_write_pin( RTM_GPIO_LED_BLUE, 0 );
    pca9554_write_pin( RTM_GPIO_LED_GREEN, 1 );
}

uint8_t rtm_get_hotswap_handle_status( void )
{
    rtm_enable_i2c();
    if ( pca9554_read_pin( RTM_GPIO_HOTSWAP_HANDLE ) ) {
        return HOTSWAP_MODULE_HANDLE_OPEN_MASK;
    } else {
        return HOTSWAP_MODULE_HANDLE_CLOSED_MASK;
    }
}

uint8_t rtm_check_presence( void )
{
    /* Due to a hardware limitation in the AFC board, we can't rely on reading the PS signal
       since this pin doesn't have a pull-up resistor, it's always read as 0.
       A very dirty workaround is to 'ping' the RTM IO Expander(PCA9554), if it responds, then the board is connected */
    rtm_enable_i2c();

    uint8_t i2c_addr, i2c_interface;
    uint8_t status = RTM_PS_ABSENT;
    uint8_t dumb;

    if (i2c_take_by_chipid( CHIP_ID_RTM_PCA9554, &i2c_addr, &i2c_interface, 0)) {
        if (xI2CMasterRead( i2c_interface, i2c_addr, &dumb, 1)) {
            status = RTM_PS_PRESENT;
        } else {
            status = RTM_PS_ABSENT;
        }
        i2c_give(i2c_interface);
    }
    return status;

    //return gpio_read_pin( GPIO_RTM_PS_PORT, GPIO_RTM_PS_PIN );
}

void rtm_hardware_init( void )
{
    rtm_enable_i2c();
    pca9554_set_port_dir( 0x1F );

    /* Turn on Blue LED and off Red and Green */
    pca9554_write_pin( RTM_GPIO_LED_BLUE, 0 );
    pca9554_write_pin( RTM_GPIO_LED_RED, 1 );
    pca9554_write_pin( RTM_GPIO_LED_GREEN, 1 );
}

void rtm_enable_i2c( void )
{
    /* Enable I2C communication with RTM */
    gpio_set_pin_dir( GPIO_RTM_PS_PORT, GPIO_RTM_PS_PIN, OUTPUT );
    gpio_set_pin_dir( GPIO_EN_RTM_I2C_PORT, GPIO_EN_RTM_I2C_PIN, OUTPUT );
    gpio_set_pin_state( GPIO_EN_RTM_I2C_PORT, GPIO_EN_RTM_I2C_PIN, HIGH );
}

void rtm_disable_i2c( void )
{
    gpio_set_pin_dir( GPIO_RTM_PS_PORT, GPIO_RTM_PS_PIN, INPUT );
    gpio_set_pin_dir( GPIO_EN_RTM_I2C_PORT, GPIO_EN_RTM_I2C_PIN, INPUT );
}
