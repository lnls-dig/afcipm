/*
 * xr77129_flash_cfg.h
 *
 *  Created on: 14 lut 2017
 *      Author: kmacias
 */

#ifndef PORT_BOARD_AFCZ_XR7724_CFG_H_
#define PORT_BOARD_AFCZ_XR7724_CFG_H_

#include "xr77129.h"

//EXAR1 ################################################################################################################################################################################
//######################################################################################################################################################################################

runtime_data_t xr7724_afcz_exar1_runtime_p5_cfg[434] = {
{ 0x8072, 0x00 }, { 0x8073, 0x02 }, { 0x8074, 0x50 }, { 0x8075, 0x00 }, { 0x8076, 0x00 }, { 0x8077, 0xFF }, { 0x8078, 0xFF }, { 0x8079, 0x00 }, { 0x807a, 0x00 }, { 0x807b, 0x32 }, { 0x807c, 0x02 }, { 0x807d, 0x32 }, { 0x807e, 0x04 }, { 0x807f, 0x32 }, { 0x8080, 0x06 }, { 0x8081, 0x00 },
{ 0x8082, 0x09 }, { 0x8083, 0x00 }, { 0x8084, 0x00 }, { 0x8085, 0x00 }, { 0x8086, 0x00 }, { 0x8087, 0x00 }, { 0x8088, 0x02 }, { 0x8089, 0x00 }, { 0x808a, 0x04 }, { 0x808b, 0x00 }, { 0x808c, 0x06 }, { 0x808d, 0x00 }, { 0x808e, 0x09 }, { 0x808f, 0x00 }, { 0x8090, 0x00 }, { 0x8091, 0x64 },
{ 0x8092, 0x29 }, { 0x8093, 0x64 }, { 0x8094, 0x64 }, { 0x8095, 0x64 }, { 0x8096, 0x28 }, { 0x8097, 0x64 }, { 0x8098, 0x64 }, { 0x8099, 0x64 }, { 0x809a, 0x28 }, { 0x809b, 0x64 }, { 0x809c, 0x64 }, { 0x809d, 0x64 }, { 0x809e, 0x28 }, { 0x809f, 0x64 }, { 0x80a0, 0x64 }, { 0x80a1, 0x0A },
{ 0x80a2, 0x20 }, { 0x80a3, 0x0A }, { 0x80a4, 0x05 }, { 0x80a5, 0x19 }, { 0x80a6, 0xFF }, { 0x80a7, 0xFF }, { 0x80a8, 0x00 }, { 0x80a9, 0xFF }, { 0x80aa, 0x01 }, { 0x80ab, 0x03 }, { 0x80ac, 0xFF },
{ 0x80ae, 0x04 }, { 0x80af, 0xFF }, { 0x80b0, 0xFF }, { 0x80b1, 0x44 }, { 0x80b2, 0x60 }, { 0x80b3, 0x60 }, { 0x80b4, 0x48 }, { 0x80b5, 0x30 }, { 0x80b6, 0x30 }, { 0x80b7, 0x30 }, { 0x80b8, 0x30 }, { 0x80b9, 0x00 }, { 0x80ba, 0x00 }, { 0x80bb, 0x00 }, { 0x80bc, 0x00 }, { 0x80bd, 0x00 },
{ 0x80be, 0x00 }, { 0x80bf, 0x00 }, { 0x80c0, 0x00 }, { 0x80c1, 0xFF }, { 0x80c2, 0xFF }, { 0x80c3, 0xFF }, { 0x80c4, 0xFF }, { 0x80c5, 0xFF }, { 0x80c6, 0xFF }, { 0x80c7, 0xFF }, { 0x80c8, 0xFF }, { 0x80c9, 0xFF }, { 0x80ca, 0xFF }, { 0x80cb, 0xFF }, { 0x80cc, 0xFF }, { 0x80cd, 0x0F },
{ 0x80ce, 0x00 }, { 0x80cf, 0x00 }, { 0x80d0, 0x00 }, { 0x80d1, 0x14 },
{ 0xc000, 0xFF }, { 0xc001, 0xC5 }, { 0xc002, 0x00 }, { 0xc003, 0x0A }, { 0xc004, 0x03 }, { 0xc005, 0x41 }, { 0xc006, 0x00 }, { 0xc007, 0xFA }, { 0xc008, 0x02 }, { 0xc009, 0xDA }, { 0xc00a, 0x20 }, { 0xc00b, 0x27 }, { 0xc00c, 0xE1 }, { 0xc00d, 0x28 }, { 0xc00e, 0x33 }, { 0xc00f, 0x0D },
{ 0xc010, 0x00 }, { 0xc011, 0x00 }, { 0xc012, 0x02 }, { 0xc013, 0x00 }, { 0xc014, 0x36 }, { 0xc015, 0x00 }, { 0xc016, 0x0B }, { 0xc017, 0x02 }, { 0xc018, 0x0D }, { 0xc019, 0xF3 }, { 0xc01a, 0x5E }, { 0xc01b, 0x69 }, { 0xc01c, 0x7A }, { 0xc01d, 0x3C }, { 0xc01e, 0x14 }, { 0xc01f, 0x01 },
{ 0xc020, 0x01 }, { 0xc021, 0x01 }, { 0xc022, 0x01 }, { 0xc023, 0x01 }, { 0xc024, 0x01 }, { 0xc025, 0x17 }, { 0xc026, 0x1E }, { 0xc027, 0xCE }, { 0xc028, 0x04 }, { 0xc029, 0xB0 }, { 0xc02a, 0x0D }, { 0xc02b, 0x00 }, { 0xc02c, 0x40 }, { 0xc02d, 0x00 }, { 0xc02e, 0x40 }, { 0xc02f, 0xCB },
{ 0xc030, 0x00 }, { 0xc031, 0x2C }, { 0xc032, 0x44 }, { 0xc033, 0xFE }, { 0xc034, 0x1E }, { 0xc035, 0x18 }, { 0xc036, 0x09 }, { 0xc037, 0x52 }, { 0xc038, 0x63 }, { 0xc039, 0x15 }, { 0xc03a, 0xA3 }, { 0xc03b, 0x2B }, { 0xc03c, 0x75 }, { 0xc03d, 0x00 }, { 0xc03e, 0x08 },
{ 0xc100, 0xFF }, { 0xc101, 0xC5 }, { 0xc102, 0x00 }, { 0xc103, 0x0A }, { 0xc104, 0x03 }, { 0xc105, 0x41 }, { 0xc106, 0x00 }, { 0xc107, 0xFA }, { 0xc108, 0x02 }, { 0xc109, 0xDA }, { 0xc10a, 0x20 }, { 0xc10b, 0x27 }, { 0xc10c, 0xE1 }, { 0xc10d, 0x28 }, { 0xc10e, 0x33 }, { 0xc10f, 0x0D },
{ 0xc110, 0x00 }, { 0xc111, 0x00 }, { 0xc112, 0x03 }, { 0xc113, 0x00 }, { 0xc114, 0x4D }, { 0xc115, 0x00 }, { 0xc116, 0x10 }, { 0xc117, 0x02 }, { 0xc118, 0x61 }, { 0xc119, 0x9F }, { 0xc11a, 0x42 }, { 0xc11b, 0x35 }, { 0xc11c, 0x3A }, { 0xc11d, 0x3C }, { 0xc11e, 0x13 }, { 0xc11f, 0x04 },
{ 0xc120, 0x04 }, { 0xc121, 0x04 }, { 0xc122, 0x04 }, { 0xc123, 0x04 }, { 0xc124, 0x04 }, { 0xc125, 0x1E }, { 0xc126, 0x1E }, { 0xc127, 0xCE }, { 0xc128, 0x04 }, { 0xc129, 0xB0 }, { 0xc12a, 0x0D }, { 0xc12b, 0x00 }, { 0xc12c, 0x40 }, { 0xc12d, 0x00 }, { 0xc12e, 0x40 }, { 0xc12f, 0xCB },
{ 0xc130, 0x00 }, { 0xc131, 0x13 }, { 0xc132, 0x60 }, { 0xc133, 0x7B }, { 0xc134, 0x1E }, { 0xc135, 0x15 }, { 0xc136, 0x2E }, { 0xc137, 0x58 }, { 0xc138, 0xDE }, { 0xc139, 0x12 }, { 0xc13a, 0x10 }, { 0xc13b, 0x20 }, { 0xc13c, 0x00 }, { 0xc13d, 0x00 }, { 0xc13e, 0x08 },
{ 0xc200, 0xFF }, { 0xc201, 0xC5 }, { 0xc202, 0x00 }, { 0xc203, 0x0A }, { 0xc204, 0x03 }, { 0xc205, 0x41 }, { 0xc206, 0x00 }, { 0xc207, 0xFA }, { 0xc208, 0x02 }, { 0xc209, 0xDA }, { 0xc20a, 0x20 }, { 0xc20b, 0x27 }, { 0xc20c, 0xE1 }, { 0xc20d, 0x28 }, { 0xc20e, 0x33 }, { 0xc20f, 0x0D },
{ 0xc210, 0x00 }, { 0xc211, 0x00 }, { 0xc212, 0x03 }, { 0xc213, 0x00 }, { 0xc214, 0x4D }, { 0xc215, 0x00 }, { 0xc216, 0x10 }, { 0xc217, 0x02 }, { 0xc218, 0x61 }, { 0xc219, 0xEB }, { 0xc21a, 0x46 }, { 0xc21b, 0x30 }, { 0xc21c, 0x34 }, { 0xc21d, 0x3C }, { 0xc21e, 0x13 }, { 0xc21f, 0x08 },
{ 0xc220, 0x08 }, { 0xc221, 0x08 }, { 0xc222, 0x08 }, { 0xc223, 0x08 }, { 0xc224, 0x08 }, { 0xc225, 0x1E }, { 0xc226, 0x1E }, { 0xc227, 0xCE }, { 0xc228, 0x04 }, { 0xc229, 0xB0 }, { 0xc22a, 0x0D }, { 0xc22b, 0x00 }, { 0xc22c, 0x40 }, { 0xc22d, 0x00 }, { 0xc22e, 0x40 }, { 0xc22f, 0xCB },
{ 0xc230, 0x00 }, { 0xc231, 0x13 }, { 0xc232, 0x60 }, { 0xc233, 0x7B }, { 0xc234, 0x1E }, { 0xc235, 0x15 }, { 0xc236, 0x2E }, { 0xc237, 0x58 }, { 0xc238, 0xE0 }, { 0xc239, 0x12 }, { 0xc23a, 0x0F }, { 0xc23b, 0x20 }, { 0xc23c, 0x00 }, { 0xc23d, 0x00 }, { 0xc23e, 0x08 },
{ 0xc300, 0xFF }, { 0xc301, 0xC5 }, { 0xc302, 0x00 }, { 0xc303, 0x0A }, { 0xc304, 0x03 }, { 0xc305, 0x41 }, { 0xc306, 0x00 }, { 0xc307, 0xFA }, { 0xc308, 0x02 }, { 0xc309, 0xDA }, { 0xc30a, 0x20 }, { 0xc30b, 0x27 }, { 0xc30c, 0xE1 }, { 0xc30d, 0x28 }, { 0xc30e, 0x33 }, { 0xc30f, 0x0D },
{ 0xc310, 0x00 }, { 0xc311, 0x00 }, { 0xc312, 0x02 }, { 0xc313, 0x00 }, { 0xc314, 0x3A }, { 0xc315, 0x00 }, { 0xc316, 0x0C }, { 0xc317, 0x02 }, { 0xc318, 0x11 }, { 0xc319, 0xEF }, { 0xc31a, 0x5C }, { 0xc31b, 0x31 }, { 0xc31c, 0x34 }, { 0xc31d, 0x3C }, { 0xc31e, 0x0E }, { 0xc31f, 0x40 },
{ 0xc320, 0x40 }, { 0xc321, 0x40 }, { 0xc322, 0x40 }, { 0xc323, 0x40 }, { 0xc324, 0x40 }, { 0xc325, 0x1E }, { 0xc326, 0x1E }, { 0xc327, 0xCE }, { 0xc328, 0x04 }, { 0xc329, 0xB0 }, { 0xc32a, 0x0D }, { 0xc32b, 0x00 }, { 0xc32c, 0x40 }, { 0xc32d, 0x00 }, { 0xc32e, 0x40 }, { 0xc32f, 0xCB },
{ 0xc330, 0x00 }, { 0xc331, 0x13 }, { 0xc332, 0x48 }, { 0xc333, 0x3D }, { 0xc334, 0x1E }, { 0xc335, 0x15 }, { 0xc336, 0x1C }, { 0xc337, 0x59 }, { 0xc338, 0x01 }, { 0xc339, 0x12 }, { 0xc33a, 0x00 }, { 0xc33b, 0x20 }, { 0xc33c, 0x00 }, { 0xc33d, 0x00 }, { 0xc33e, 0x08 },
{ 0xc400, 0x05 }, { 0xc401, 0x00 }, { 0xc402, 0x00 }, { 0xc403, 0x4C }, { 0xc404, 0x4F }, { 0xc405, 0x4C }, { 0xc406, 0x1E }, { 0xc407, 0x1C }, { 0xc408, 0x00 }, { 0xc409, 0x30 }, { 0xc40a, 0x01 }, { 0xc40b, 0x9F }, { 0xc40c, 0x55 }, { 0xc40d, 0x02 }, { 0xc40e, 0x02 }, { 0xc40f, 0x00 },
{ 0xc410, 0x10 }, { 0xc411, 0x16 }, { 0xc412, 0x04 }, { 0xc413, 0x0A }, { 0xc414, 0x10 }, { 0xc415, 0x00 }, { 0xc416, 0x00 }, { 0xc417, 0x00 }, { 0xc418, 0x00 }, { 0xc419, 0x20 }, { 0xc41a, 0x0F }, { 0xc41b, 0x17 }, { 0xc41c, 0x10 }, { 0xc41d, 0x17 }, { 0xc41e, 0x0F },
{ 0xd001, 0x00 }, { 0xd002, 0x00 }, { 0xd003, 0x02 }, { 0xd004, 0x00 }, { 0xd005, 0x00 }, { 0xd006, 0x37 }, { 0xd007, 0x00 },
{ 0xd009, 0x0F }, { 0xd00a, 0x03 }, { 0xd00b, 0x03 }, { 0xd00c, 0x03 }, { 0xd00d, 0x03 }, { 0xd00e, 0x0A }, { 0xd00f, 0x09 }, { 0xd010, 0x09 }, { 0xd011, 0x09 }, { 0xd012, 0x00 }, { 0xd013, 0x00 }, { 0xd014, 0x00 }, { 0xd015, 0x00 }, { 0xd016, 0x0F }, { 0xd017, 0x00 }, { 0xd018, 0x02 },
{ 0xd019, 0x00 }, { 0xd01a, 0x00 }, { 0xd01b, 0x00 }, { 0xd01c, 0x00 }, { 0xd01d, 0x01 }, { 0xd01e, 0x00 }, { 0xd01f, 0x00 }, { 0xd020, 0x00 }, { 0xd021, 0x00 }, { 0xd022, 0x00 }, { 0xd023, 0x04 }, { 0xd024, 0x04 }, { 0xd025, 0x00 }, { 0xd026, 0x00 }, { 0xd027, 0x00 },
{ 0xd302, 0x62 }, { 0xd303, 0x62 }, { 0xd304, 0x61 }, { 0xd305, 0x62 }, { 0xd306, 0x61 },
{ 0xd308, 0x02 },
{ 0xd900, 0x62 }, { 0xd901, 0x01 }, { 0xd902, 0x62 }, { 0xd903, 0xFA },
{ 0xffa4, 0x80 },
{ 0xffa6, 0x00 },
{ 0xffa9, 0x00 },
{ 0xffab, 0xFF },
{ 0xffad, 0x12 },
{ 0xffaf, 0x02 },
{ 0xffb2, 0xEB },
{ 0xffdc, 0x00 }
};

//EXAR2 ################################################################################################################################################################################
//######################################################################################################################################################################################

//XRP7724
runtime_data_t xr7724_afcz_exar2_runtime_p4_cfg[435] = {
{ 0x8072, 0x00 }, { 0x8073, 0x02 }, { 0x8074, 0x50 }, { 0x8075, 0x00 }, { 0x8076, 0x00 }, { 0x8077, 0xFF }, { 0x8078, 0xFF }, { 0x8079, 0x14 }, { 0x807a, 0x00 }, { 0x807b, 0x28 }, { 0x807c, 0x02 }, { 0x807d, 0x00 }, { 0x807e, 0x04 }, { 0x807f, 0x00 }, { 0x8080, 0x06 }, { 0x8081, 0x00 },
{ 0x8082, 0x09 }, { 0x8083, 0x00 }, { 0x8084, 0x00 }, { 0x8085, 0x00 }, { 0x8086, 0x00 }, { 0x8087, 0x00 }, { 0x8088, 0x02 }, { 0x8089, 0x00 }, { 0x808a, 0x04 }, { 0x808b, 0x00 }, { 0x808c, 0x06 }, { 0x808d, 0x00 }, { 0x808e, 0x09 }, { 0x808f, 0x00 }, { 0x8090, 0x00 }, { 0x8091, 0x64 },
{ 0x8092, 0x30 }, { 0x8093, 0x64 }, { 0x8094, 0x64 }, { 0x8095, 0x64 }, { 0x8096, 0x30 }, { 0x8097, 0x64 }, { 0x8098, 0x64 }, { 0x8099, 0x64 }, { 0x809a, 0x30 }, { 0x809b, 0x64 }, { 0x809c, 0x64 }, { 0x809d, 0x64 }, { 0x809e, 0x30 }, { 0x809f, 0x64 }, { 0x80a0, 0x64 }, { 0x80a1, 0x0A },
{ 0x80a2, 0x20 }, { 0x80a3, 0x0A }, { 0x80a4, 0x05 }, { 0x80a5, 0x19 }, { 0x80a6, 0xFF }, { 0x80a7, 0xFF }, { 0x80a8, 0x00 }, { 0x80a9, 0xFF }, { 0x80aa, 0x01 }, { 0x80ab, 0xFF }, { 0x80ac, 0x03 }, { 0x80ad, 0x33 }, { 0x80ae, 0x04 }, { 0x80af, 0xFF }, { 0x80b0, 0xFF }, { 0x80b1, 0x48 },
{ 0x80b2, 0x42 }, { 0x80b3, 0x48 }, { 0x80b4, 0x64 }, { 0x80b5, 0x18 }, { 0x80b6, 0x0C }, { 0x80b7, 0x18 }, { 0x80b8, 0x0C }, { 0x80b9, 0x00 }, { 0x80ba, 0x00 }, { 0x80bb, 0x00 }, { 0x80bc, 0x00 }, { 0x80bd, 0x00 }, { 0x80be, 0x00 }, { 0x80bf, 0x00 }, { 0x80c0, 0x00 }, { 0x80c1, 0xFF },
{ 0x80c2, 0xFF }, { 0x80c3, 0xFF }, { 0x80c4, 0xFF }, { 0x80c5, 0xFF }, { 0x80c6, 0xFF }, { 0x80c7, 0xFF }, { 0x80c8, 0xFF }, { 0x80c9, 0xFF }, { 0x80ca, 0xFF }, { 0x80cb, 0xFF }, { 0x80cc, 0xFF }, { 0x80cd, 0x0F }, { 0x80ce, 0x00 }, { 0x80cf, 0x00 }, { 0x80d0, 0x00 }, { 0x80d1, 0x14 },
{ 0xc000, 0xFF }, { 0xc001, 0xC5 }, { 0xc002, 0x00 }, { 0xc003, 0x0A }, { 0xc004, 0x03 }, { 0xc005, 0x41 }, { 0xc006, 0x00 }, { 0xc007, 0xFA }, { 0xc008, 0x02 }, { 0xc009, 0xDA }, { 0xc00a, 0x20 }, { 0xc00b, 0x13 }, { 0xc00c, 0xE1 }, { 0xc00d, 0x28 }, { 0xc00e, 0x33 }, { 0xc00f, 0x0D },
{ 0xc010, 0x00 }, { 0xc011, 0x00 }, { 0xc012, 0x05 }, { 0xc013, 0x00 }, { 0xc014, 0x73 }, { 0xc015, 0x00 }, { 0xc016, 0x18 }, { 0xc017, 0x02 }, { 0xc018, 0x11 }, { 0xc019, 0xEF }, { 0xc01a, 0x5C }, { 0xc01b, 0x2A }, { 0xc01c, 0x2D }, { 0xc01d, 0x3C }, { 0xc01e, 0x0E }, { 0xc01f, 0x01 },
{ 0xc020, 0x01 }, { 0xc021, 0x01 }, { 0xc022, 0x01 }, { 0xc023, 0x01 }, { 0xc024, 0x01 }, { 0xc025, 0x1D }, { 0xc026, 0x1E }, { 0xc027, 0xCE }, { 0xc028, 0x04 }, { 0xc029, 0xB0 }, { 0xc02a, 0x0D }, { 0xc02b, 0x00 }, { 0xc02c, 0x40 }, { 0xc02d, 0x00 }, { 0xc02e, 0x40 }, { 0xc02f, 0xCB },
{ 0xc030, 0x00 }, { 0xc031, 0x29 }, { 0xc032, 0x48 }, { 0xc033, 0x7B }, { 0xc034, 0x3D }, { 0xc035, 0x15 }, { 0xc036, 0x4F }, { 0xc037, 0x58 }, { 0xc038, 0xA3 }, { 0xc039, 0x12 }, { 0xc03a, 0x2B }, { 0xc03b, 0x20 }, { 0xc03c, 0x00 }, { 0xc03d, 0x11 }, { 0xc03e, 0x18 },
{ 0xc100, 0xFF }, { 0xc101, 0xC5 }, { 0xc102, 0x00 }, { 0xc103, 0x0A }, { 0xc104, 0x03 }, { 0xc105, 0x41 }, { 0xc106, 0x00 }, { 0xc107, 0xFA }, { 0xc108, 0x02 }, { 0xc109, 0xDA }, { 0xc10a, 0x20 }, { 0xc10b, 0x09 }, { 0xc10c, 0xE1 }, { 0xc10d, 0x14 }, { 0xc10e, 0x33 }, { 0xc10f, 0x0D },
{ 0xc110, 0x00 }, { 0xc111, 0x00 }, { 0xc112, 0x04 }, { 0xc113, 0x00 }, { 0xc114, 0x6A }, { 0xc115, 0x00 }, { 0xc116, 0x16 }, { 0xc117, 0x02 }, { 0xc118, 0x0D }, { 0xc119, 0xF3 }, { 0xc11a, 0x5F }, { 0xc11b, 0x2D }, { 0xc11c, 0x31 }, { 0xc11d, 0x3C }, { 0xc11e, 0x0D }, { 0xc11f, 0x02 },
{ 0xc120, 0x02 }, { 0xc121, 0x02 }, { 0xc122, 0x02 }, { 0xc123, 0x02 }, { 0xc124, 0x02 }, { 0xc125, 0x1C }, { 0xc126, 0x1E }, { 0xc127, 0xCE }, { 0xc128, 0x04 }, { 0xc129, 0xB0 }, { 0xc12a, 0x0D }, { 0xc12b, 0x00 }, { 0xc12c, 0x40 }, { 0xc12d, 0x00 }, { 0xc12e, 0x40 }, { 0xc12f, 0xCB },
{ 0xc130, 0x00 }, { 0xc131, 0x60 }, { 0xc132, 0x42 }, { 0xc133, 0xF6 }, { 0xc134, 0x7B }, { 0xc135, 0x1B }, { 0xc136, 0xA8 }, { 0xc137, 0x4C }, { 0xc138, 0xE8 }, { 0xc139, 0x17 }, { 0xc13a, 0x95 }, { 0xc13b, 0x20 }, { 0xc13c, 0x00 }, { 0xc13d, 0x21 }, { 0xc13e, 0x18 },
{ 0xc200, 0xFF }, { 0xc201, 0xC5 }, { 0xc202, 0x00 }, { 0xc203, 0x0A }, { 0xc204, 0x03 }, { 0xc205, 0x41 }, { 0xc206, 0x00 }, { 0xc207, 0xFA }, { 0xc208, 0x02 }, { 0xc209, 0xDA }, { 0xc20a, 0x20 }, { 0xc20b, 0x13 }, { 0xc20c, 0xE1 }, { 0xc20d, 0x28 }, { 0xc20e, 0x33 }, { 0xc20f, 0x0D },
{ 0xc210, 0x00 }, { 0xc211, 0x00 }, { 0xc212, 0x05 }, { 0xc213, 0x00 }, { 0xc214, 0x73 }, { 0xc215, 0x00 }, { 0xc216, 0x18 }, { 0xc217, 0x02 }, { 0xc218, 0x11 }, { 0xc219, 0xEF }, { 0xc21a, 0x5C }, { 0xc21b, 0x2A }, { 0xc21c, 0x2D }, { 0xc21d, 0x3C }, { 0xc21e, 0x0E }, { 0xc21f, 0x40 },
{ 0xc220, 0x40 }, { 0xc221, 0x40 }, { 0xc222, 0x40 }, { 0xc223, 0x40 }, { 0xc224, 0x40 }, { 0xc225, 0x1D }, { 0xc226, 0x1E }, { 0xc227, 0xCE }, { 0xc228, 0x04 }, { 0xc229, 0xB0 }, { 0xc22a, 0x0D }, { 0xc22b, 0x00 }, { 0xc22c, 0x40 }, { 0xc22d, 0x00 }, { 0xc22e, 0x40 }, { 0xc22f, 0xCB },
{ 0xc230, 0x00 }, { 0xc231, 0x29 }, { 0xc232, 0x48 }, { 0xc233, 0x7B }, { 0xc234, 0x3D }, { 0xc235, 0x15 }, { 0xc236, 0x4F }, { 0xc237, 0x58 }, { 0xc238, 0xA3 }, { 0xc239, 0x12 }, { 0xc23a, 0x2B }, { 0xc23b, 0x20 }, { 0xc23c, 0x00 }, { 0xc23d, 0x11 }, { 0xc23e, 0x18 },
{ 0xc300, 0xFF }, { 0xc301, 0xC5 }, { 0xc302, 0x00 }, { 0xc303, 0x0A }, { 0xc304, 0x03 }, { 0xc305, 0x41 }, { 0xc306, 0x00 }, { 0xc307, 0xFA }, { 0xc308, 0x02 }, { 0xc309, 0xDA }, { 0xc30a, 0x20 }, { 0xc30b, 0x09 }, { 0xc30c, 0xE1 }, { 0xc30d, 0x14 }, { 0xc30e, 0x33 }, { 0xc30f, 0x0D },
{ 0xc310, 0x00 }, { 0xc311, 0x00 }, { 0xc312, 0x06 }, { 0xc313, 0x00 }, { 0xc314, 0xA0 }, { 0xc315, 0x00 }, { 0xc316, 0x21 }, { 0xc317, 0x02 }, { 0xc318, 0x15 }, { 0xc319, 0xEB }, { 0xc31a, 0x4E }, { 0xc31b, 0x22 }, { 0xc31c, 0x24 }, { 0xc31d, 0x3C }, { 0xc31e, 0x14 }, { 0xc31f, 0x08 },
{ 0xc320, 0x08 }, { 0xc321, 0x08 }, { 0xc322, 0x08 }, { 0xc323, 0x08 }, { 0xc324, 0x08 }, { 0xc325, 0x1C }, { 0xc326, 0x1E }, { 0xc327, 0xCE }, { 0xc328, 0x04 }, { 0xc329, 0xB0 }, { 0xc32a, 0x0D }, { 0xc32b, 0x00 }, { 0xc32c, 0x40 }, { 0xc32d, 0x00 }, { 0xc32e, 0x40 }, { 0xc32f, 0xCB },
{ 0xc330, 0x00 }, { 0xc331, 0x78 }, { 0xc332, 0x64 }, { 0xc333, 0xF6 }, { 0xc334, 0x7B }, { 0xc335, 0x05 }, { 0xc336, 0xDD }, { 0xc337, 0x75 }, { 0xc338, 0x2B }, { 0xc339, 0x05 }, { 0xc33a, 0x00 }, { 0xc33b, 0x20 }, { 0xc33c, 0x00 }, { 0xc33d, 0x20 }, { 0xc33e, 0x08 },
{ 0xc400, 0x05 }, { 0xc401, 0x00 }, { 0xc402, 0x00 }, { 0xc403, 0x4C }, { 0xc404, 0x4F }, { 0xc405, 0x4C }, { 0xc406, 0x1E }, { 0xc407, 0x1C }, { 0xc408, 0x00 }, { 0xc409, 0x30 }, { 0xc40a, 0x01 }, { 0xc40b, 0x9F }, { 0xc40c, 0x55 }, { 0xc40d, 0x04 }, { 0xc40e, 0x04 }, { 0xc40f, 0x00 },
{ 0xc410, 0x10 }, { 0xc411, 0x16 }, { 0xc412, 0x04 }, { 0xc413, 0x0A }, { 0xc414, 0x10 }, { 0xc415, 0x00 }, { 0xc416, 0x00 }, { 0xc417, 0x00 }, { 0xc418, 0x00 }, { 0xc419, 0x20 }, { 0xc41a, 0x0F }, { 0xc41b, 0x17 }, { 0xc41c, 0x10 }, { 0xc41d, 0x17 }, { 0xc41e, 0x0F },
{ 0xd001, 0x00 }, { 0xd002, 0x00 }, { 0xd003, 0x02 }, { 0xd004, 0x00 }, { 0xd005, 0x00 }, { 0xd006, 0x37 }, { 0xd007, 0x00 },
{ 0xd009, 0x0F }, { 0xd00a, 0x03 }, { 0xd00b, 0x02 }, { 0xd00c, 0x03 }, { 0xd00d, 0x02 }, { 0xd00e, 0x09 }, { 0xd00f, 0x09 }, { 0xd010, 0x09 }, { 0xd011, 0x09 }, { 0xd012, 0x00 }, { 0xd013, 0x00 }, { 0xd014, 0x00 }, { 0xd015, 0x00 }, { 0xd016, 0x0F }, { 0xd017, 0x00 }, { 0xd018, 0x02 },
{ 0xd019, 0x00 }, { 0xd01a, 0x00 }, { 0xd01b, 0x00 }, { 0xd01c, 0x00 }, { 0xd01d, 0x01 }, { 0xd01e, 0x00 }, { 0xd01f, 0x00 }, { 0xd020, 0x00 }, { 0xd021, 0x00 }, { 0xd022, 0x00 }, { 0xd023, 0x04 }, { 0xd024, 0x04 }, { 0xd025, 0x00 }, { 0xd026, 0x00 }, { 0xd027, 0x00 },
{ 0xd302, 0x62 }, { 0xd303, 0x4F }, { 0xd304, 0x61 }, { 0xd305, 0x62 }, { 0xd306, 0x61 },
{ 0xd308, 0x00 },
{ 0xd900, 0x62 }, { 0xd901, 0x01 }, { 0xd902, 0x62 }, { 0xd903, 0xFA },
{ 0xffa4, 0x80 },
{ 0xffa6, 0x00 },
{ 0xffa9, 0x00 },
{ 0xffab, 0xFF },
{ 0xffad, 0x12 },
{ 0xffaf, 0x02 },
{ 0xffb2, 0xEB },
{ 0xffdc, 0x00 }
};

#endif /* PORT_BOARD_AFCZ_XR7724_CFG_H_ */
