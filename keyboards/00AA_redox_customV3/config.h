/* Copyright 2020 Thys de Wet
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x7812
#define DEVICE_VER 0x0001
#define MANUFACTURER tkw
#define PRODUCT Grandiceps Split

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 7

#define MATRIX_COL_PINS { A0, A1, A2, A3, A4, A5, A6 }
#define MATRIX_ROW_PINS { B9, B8, B5, B4, B3 }


#define DIODE_DIRECTION COL2ROW

#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN B6     // USART TX pin
#define SERIAL_USART_RX_PIN B7     // USART RX pin

#define MATRIX_IO_DELAY 5
#define TAP_CODE_DELAY 10

#define ENCODERS_PAD_A { B14 }
#define ENCODERS_PAD_B { B15 }

#define RGB_DI_PIN B1
#define RGBLED_NUM 16
#define RGBLED_SPLIT { 8,8 }
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_ANIMATIONS

#define WS2812_PWM_DRIVER PWMD3
#define WS2812_PWM_CHANNEL 4
#define WS2812_PWM_PAL_MODE 2
#define WS2812_DMA_STREAM STM32_DMA1_STREAM2
#define WS2812_DMA_CHANNEL 5

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
