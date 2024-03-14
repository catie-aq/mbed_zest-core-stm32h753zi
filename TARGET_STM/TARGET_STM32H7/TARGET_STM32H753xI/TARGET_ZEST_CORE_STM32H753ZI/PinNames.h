/*
 * Copyright (c) 2021, CATIE
 * SPDX-License-Identifier: Apache-2.0
 */

/* MBED TARGET LIST: ZEST_CORE_STM32H753ZIT6 */

#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "cmsis.h"
#include "PinNamesTypes.h"

#ifdef __cplusplus
extern "C" {
#endif

#define DUAL_PAD 0xF00

typedef enum {
    ALT0  = 0x100,
    ALT1  = 0x200,
    ALT2  = 0x300,
} ALTx;

typedef enum {
    PA_0       = 0x00,
    PA_1       = 0x01,
    PA_1_ALT0  = PA_1  | ALT0, // same pin used for alternate HW
    PA_2       = 0x02,
    PA_2_ALT0  = PA_2  | ALT0, // same pin used for alternate HW
    PA_3       = 0x03,
    PA_3_ALT0  = PA_3  | ALT0, // same pin used for alternate HW
    PA_4       = 0x04,
    PA_4_ALT0  = PA_4  | ALT0, // same pin used for alternate HW
    PA_4_ALT1  = PA_4  | ALT1, // same pin used for alternate HW
    PA_5       = 0x05,
    PA_5_ALT0  = PA_5  | ALT0, // same pin used for alternate HW
    PA_6       = 0x06,
    PA_6_ALT0  = PA_6  | ALT0, // same pin used for alternate HW
    PA_7       = 0x07,
    PA_7_ALT0  = PA_7  | ALT0, // same pin used for alternate HW
    PA_7_ALT1  = PA_7  | ALT1, // same pin used for alternate HW
    PA_7_ALT2  = PA_7  | ALT2, // same pin used for alternate HW
    PA_8       = 0x08,
    PA_9       = 0x09,
    PA_9_ALT0  = PA_9  | ALT0, // same pin used for alternate HW
    PA_10      = 0x0A,
    PA_10_ALT0 = PA_10 | ALT0, // same pin used for alternate HW
    PA_11      = 0x0B,
    PA_11_ALT0 = PA_11 | ALT0, // same pin used for alternate HW
    PA_12      = 0x0C,
    PA_12_ALT0 = PA_12 | ALT0, // same pin used for alternate HW
    PA_13      = 0x0D,
    PA_14      = 0x0E,
    PA_15      = 0x0F,
    PA_15_ALT0 = PA_15 | ALT0, // same pin used for alternate HW
    PA_15_ALT1 = PA_15 | ALT1, // same pin used for alternate HW
    PB_0       = 0x10,
    PB_0_ALT0  = PB_0  | ALT0, // same pin used for alternate HW
    PB_0_ALT1  = PB_0  | ALT1, // same pin used for alternate HW
    PB_1       = 0x11,
    PB_1_ALT0  = PB_1  | ALT0, // same pin used for alternate HW
    PB_1_ALT1  = PB_1  | ALT1, // same pin used for alternate HW
    PB_2       = 0x12,
    PB_3       = 0x13,
    PB_3_ALT0  = PB_3  | ALT0, // same pin used for alternate HW
    PB_3_ALT1  = PB_3  | ALT1, // same pin used for alternate HW
    PB_4       = 0x14,
    PB_4_ALT0  = PB_4  | ALT0, // same pin used for alternate HW
    PB_4_ALT1  = PB_4  | ALT1, // same pin used for alternate HW
    PB_5       = 0x15,
    PB_5_ALT0  = PB_5  | ALT0, // same pin used for alternate HW
    PB_5_ALT1  = PB_5  | ALT1, // same pin used for alternate HW
    PB_6       = 0x16,
    PB_6_ALT0  = PB_6  | ALT0, // same pin used for alternate HW
    PB_6_ALT1  = PB_6  | ALT1, // same pin used for alternate HW
    PB_7       = 0x17,
    PB_7_ALT0  = PB_7  | ALT0, // same pin used for alternate HW
    PB_8       = 0x18,
    PB_8_ALT0  = PB_8  | ALT0, // same pin used for alternate HW
    PB_9       = 0x19,
    PB_9_ALT0  = PB_9  | ALT0, // same pin used for alternate HW
    PB_10      = 0x1A,
    PB_11      = 0x1B,
    PB_12      = 0x1C,
    PB_13      = 0x1D,
    PB_14      = 0x1E,
    PB_14_ALT0 = PB_14 | ALT0, // same pin used for alternate HW
    PB_14_ALT1 = PB_14 | ALT1, // same pin used for alternate HW
    PB_15      = 0x1F,
    PB_15_ALT0 = PB_15 | ALT0, // same pin used for alternate HW
    PB_15_ALT1 = PB_15 | ALT1, // same pin used for alternate HW
    PC_0       = 0x20,
    PC_0_ALT0  = PC_0  | ALT0, // same pin used for alternate HW
    PC_0_ALT1  = PC_0  | ALT1, // same pin used for alternate HW
    PC_1       = 0x21,
    PC_1_ALT0  = PC_1  | ALT0, // same pin used for alternate HW
    PC_1_ALT1  = PC_1  | ALT1, // same pin used for alternate HW
    PC_2       = 0x22,
    PC_2C      = PC_2  | DUAL_PAD, // dual pad
    PC_3       = 0x23,
    PC_3C      = PC_3  | DUAL_PAD, // dual pad
    PC_4       = 0x24,
    PC_4_ALT0  = PC_4  | ALT0, // same pin used for alternate HW
    PC_5       = 0x25,
    PC_5_ALT0  = PC_5  | ALT0, // same pin used for alternate HW
    PC_6       = 0x26,
    PC_6_ALT0  = PC_6  | ALT0, // same pin used for alternate HW
    PC_7       = 0x27,
    PC_7_ALT0  = PC_7  | ALT0, // same pin used for alternate HW
    PC_8       = 0x28,
    PC_8_ALT0  = PC_8  | ALT0, // same pin used for alternate HW
    PC_9       = 0x29,
    PC_9_ALT0  = PC_9  | ALT0, // same pin used for alternate HW
    PC_10      = 0x2A,
    PC_10_ALT0 = PC_10 | ALT0, // same pin used for alternate HW
    PC_11      = 0x2B,
    PC_11_ALT0 = PC_11 | ALT0, // same pin used for alternate HW
    PC_12      = 0x2C,
    PC_13      = 0x2D,
    PC_14      = 0x2E,
    PC_15      = 0x2F,
    PD_0       = 0x30,
    PD_1       = 0x31,
    PD_2       = 0x32,
    PD_3       = 0x33,
    PD_4       = 0x34,
    PD_5       = 0x35,
    PD_6       = 0x36,
    PD_7       = 0x37,
    PD_8       = 0x38,
    PD_9       = 0x39,
    PD_10      = 0x3A,
    PD_11      = 0x3B,
    PD_12      = 0x3C,
    PD_13      = 0x3D,
    PD_14      = 0x3E,
    PD_15      = 0x3F,
    PE_0       = 0x40,
    PE_1       = 0x41,
    PE_2       = 0x42,
    PE_3       = 0x43,
    PE_4       = 0x44,
    PE_5       = 0x45,
    PE_6       = 0x46,
    PE_7       = 0x47,
    PE_8       = 0x48,
    PE_9       = 0x49,
    PE_10      = 0x4A,
    PE_11      = 0x4B,
    PE_12      = 0x4C,
    PE_13      = 0x4D,
    PE_14      = 0x4E,
    PE_15      = 0x4F,
    PF_0       = 0x50,
    PF_1       = 0x51,
    PF_2       = 0x52,
    PF_3       = 0x53,
    PF_4       = 0x54,
    PF_5       = 0x55,
    PF_6       = 0x56,
    PF_7       = 0x57,
    PF_8       = 0x58,
    PF_8_ALT0  = PF_8  | ALT0, // same pin used for alternate HW
    PF_9       = 0x59,
    PF_9_ALT0  = PF_9  | ALT0, // same pin used for alternate HW
    PF_10      = 0x5A,
    PF_11      = 0x5B,
    PF_12      = 0x5C,
    PF_13      = 0x5D,
    PF_14      = 0x5E,
    PF_15      = 0x5F,
    PG_0       = 0x60,
    PG_1       = 0x61,
    PG_2       = 0x62,
    PG_3       = 0x63,
    PG_4       = 0x64,
    PG_5       = 0x65,
    PG_6       = 0x66,
    PG_7       = 0x67,
    PG_8       = 0x68,
    PG_9       = 0x69,
    PG_10      = 0x6A,
    PG_11      = 0x6B,
    PG_12      = 0x6C,
    PG_13      = 0x6D,
    PG_14      = 0x6E,
    PG_15      = 0x6F,
    PH_0       = 0x70,
    PH_1       = 0x71,

    /**** ADC internal channels ****/

    ADC_TEMP = 0xF0, // Internal pin virtual value
    ADC_VREF = 0xF1, // Internal pin virtual value
    ADC_VBAT = 0xF2, // Internal pin virtual value

    // STDIO for console print
#ifdef MBED_CONF_TARGET_STDIO_UART_TX
    CONSOLE_TX = MBED_CONF_TARGET_STDIO_UART_TX,
#else
    CONSOLE_TX = PB_14,
#endif
#ifdef MBED_CONF_TARGET_STDIO_UART_RX
    CONSOLE_RX = MBED_CONF_TARGET_STDIO_UART_RX,
#else
    CONSOLE_RX = PB_15,
#endif

    /**** USB FS pins ****/
    USB_OTG_FS_DM = PA_11,
    USB_OTG_FS_DP = PA_12,
    USB_OTG_FS_VBUS = PA_9,

    /**** ETHERNET pins ****/
    ETH_CRS_DV = PA_7,
    ETH_MDC = PC_1,
    ETH_MDIO = PA_2,
    ETH_REF_CLK = PA_1,
    ETH_RXD0 = PC_4,
    ETH_RXD1 = PC_5,
    ETH_TXD0 = PB_12,
    ETH_TXD1 = PB_13,
    ETH_TX_EN = PB_11,

    /**** OSCILLATOR pins ****/
    RCC_OSC32_IN = PC_14,
    RCC_OSC32_OUT = PC_15,
    RCC_OSC_IN = PH_0,
    RCC_OSC_OUT = PH_1,

    /**** DEBUG pins ****/
    DEBUG_JTCK_SWCLK = PA_14,
    DEBUG_JTDO_SWO = PB_3,
    DEBUG_JTMS_SWDIO = PA_13,
    DEBUG_TRACECLK = PE_2,
    DEBUG_TRACED0 = PE_3,
    DEBUG_TRACED1 = PE_4,
    DEBUG_TRACED2 = PE_5,
    DEBUG_TRACED3 = PE_6,

    /**** SD Card pins ****/
    SD_DTC          = PE_10,
    SD_SPI_NSS      = PE_11,
    SD_SPI_MOSI     = PE_14,
    SD_SPI_MISO     = PE_13,
    SD_SPI_SCK      = PE_12,

    /**** Zest connector signal namings (P1) ****/
    P1_CAN_RX       = PB_5,
    P1_CAN_TX       = PB_6,
    P1_I2C_SCL      = PF_1,
    P1_I2C_SDA      = PF_0,
    P1_UART_RX      = PD_6,
    P1_UART_TX      = PD_5,
    P1_SPI_MOSI     = PF_9,
    P1_SPI_MISO     = PF_8,
    P1_SPI_SCK      = PF_7,
    P1_SPI_CS       = PF_6,
    P1_PWM1         = PA_3,
    P1_PWM2         = PA_6,
    P1_PWM3         = PB_0,
    P1_PWM4         = PB_1,
    P1_WKUP         = PA_0,
    P1_ADC1         = PF_3,
    P1_ADC2         = PF_4,
    P1_ADC3         = PF_5,
    P1_ADC4         = PC_0,
    P1_DIO1         = PG_14,
    P1_DIO2         = PG_13,
    P1_DIO3         = PG_12,
    P1_DIO4         = PB_2,
    P1_DIO5         = PG_0,
    P1_DIO6         = PE_9,
    P1_DIO7         = PG_1,
    P1_DIO8         = PE_15,
    P1_DIO9         = PF_2,
    P1_DIO10        = PC_3,
    P1_DIO11        = PC_2,
    P1_DIO12        = PE_7,
    P1_DIO13        = PF_10,
    P1_DIO14        = PF_15,
    P1_DIO15        = PE_0,
    P1_DIO16        = PB_4,
    P1_DIO17        = PE_1,
    P1_DIO18        = PE_8,
    P1_DIO19        = PG_15,
    P1_DIO20        = PD_4,

    /**** Zest connector signal namings (P2) ****/
    P2_CAN_RX       = PD_0,
    P2_CAN_TX       = PD_1,
    P2_I2C_SCL      = PB_8,
    P2_I2C_SDA      = PB_9,
    P2_UART_RX      = PC_7,
    P2_UART_TX      = PC_6,
    P2_SPI_MOSI     = PD_7,
    P2_SPI_MISO     = PG_9,
    P2_SPI_SCK      = PG_11,
    P2_SPI_CS       = PG_10,
    P2_PWM1         = PD_12,
    P2_PWM2         = PD_13,
    P2_PWM3         = PD_14,
    P2_PWM4         = PD_15,
    P2_WKUP         = PC_13,
    P2_ADC1         = PF_11,
    P2_ADC2         = PF_12,
    P2_ADC3         = PF_13,
    P2_ADC4         = PF_14,
    P2_DIO1         = PD_2,
    P2_DIO2         = PC_12,
    P2_DIO3         = PC_10,
    P2_DIO4         = PA_15,
    P2_DIO5         = PG_8,
    P2_DIO6         = PC_8,
    P2_DIO7         = PC_9,
    P2_DIO8         = PA_10,
    P2_DIO9         = PG_7,
    P2_DIO10        = PC_11,
    P2_DIO11        = PD_3,
    P2_DIO12        = PD_9,
    P2_DIO13        = PG_4,
    P2_DIO14        = PG_5,
    P2_DIO15        = PG_3,
    P2_DIO16        = PG_6,
    P2_DIO17        = PG_2,
    P2_DIO18        = PD_8,
    P2_DIO19        = PD_11,
    P2_DIO20        = PD_10,

    // Not connected
    NC = (int)0xFFFFFFFF
} PinName;

// Standardized LED and button names
#define LED1     PB_7
#define BUTTON1  PD_10

#ifdef __cplusplus
}
#endif

#endif
