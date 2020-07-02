/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Ha Thach for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _FEATHER_NRF52840_H
#define _FEATHER_NRF52840_H
#define _NEBULITE_SMART

#define _PINNUM(port, pin)    ((port)*32 + (pin))

#define _POW_EN _PINNUM(1, 3)
#define _PWM_EL _PINNUM(0, 0)
#define _JACK1_SW _PINNUM(1, 10)
#define _JACK2_SW _PINNUM(0, 29)
#define _JACK3_SW _PINNUM(1, 15)
#define _JACK4_SW _PINNUM(1, 13)
#define _JACK5_SW _PINNUM(1, 12)

#define _PB_LOAD _PINNUM(0, 21)

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER           2
#define LED_PRIMARY_PIN       _PINNUM(0, 24)
#define LED_SECONDARY_PIN     _PINNUM(0, 25)
#define LED_STATE_ON          1

#define LED_NEOPIXEL          _PINNUM(1, 9)
#define NEOPIXELS_NUMBER      7
#define BOARD_RGB_BRIGHTNESS  0xffffff

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER        2
#define BUTTON_1              _PINNUM(0, 10)
#define BUTTON_2              _PINNUM(0, 23)
#define BUTTON_PULL           NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER   "Funkelfetisch"
#define BLEDIS_MODEL          "NEBULITE Smart"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID           0x16D0
#define USB_DESC_UF2_PID       0x0029
#define USB_DESC_CDC_ONLY_PID  0x0EF7

//------------- UF2 -------------//
#define UF2_PRODUCT_NAME   "NEBULITE Smart"
#define UF2_VOLUME_LABEL   "NEBULITE_BL"
#define UF2_BOARD_ID       "NEBULITE-Smart-rev0"
#define UF2_INDEX_URL      "https://nebulitecollection.com"

/*------------------------------------------------------------------*/
/* UART
 *------------------------------------------------------------------*/
#define RX_PIN_NUMBER         8
#define TX_PIN_NUMBER         6
#define CTS_PIN_NUMBER        0
#define RTS_PIN_NUMBER        0
#define HWFC                  false

#endif // _FEATHER_NRF52840_H
