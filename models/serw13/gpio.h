/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef MAINBOARD_GPIO_H
#define MAINBOARD_GPIO_H

#include <soc/gpe.h>
#include <soc/gpio.h>

#ifndef __ACPI__

/* Pad configuration in ramstage. */
static const struct pad_config gpio_table[] = {
	PAD_CFG_NF(GPD0, UP_20K, PWROK, NF1),
	PAD_CFG_NF(GPD1, NATIVE, PWROK, NF1),
	PAD_CFG_GPO(GPD2, 0, DEEP),
	PAD_CFG_NF(GPD3, UP_20K, PWROK, NF1),
	PAD_CFG_NF(GPD4, NONE, PWROK, NF1),
	PAD_CFG_NF(GPD5, NONE, PWROK, NF1),
	PAD_CFG_NF(GPD6, NONE, DEEP, NF1),
	PAD_CFG_GPO(GPD7, 0, DEEP),
	PAD_CFG_NF(GPD8, NONE, PWROK, NF1),
	PAD_CFG_GPO(GPD9, 0, PWROK),
	PAD_CFG_NF(GPD10, NONE, DEEP, NF1),
	PAD_CFG_GPO(GPD11, 0, DEEP),
	PAD_CFG_GPO(GPD12, 0, DEEP),
	PAD_CFG_NF(GPP_A0, UP_20K, DEEP, NF1),
	PAD_CFG_NF(GPP_A1, UP_20K, DEEP, NF1),
	PAD_CFG_NF(GPP_A2, UP_20K, DEEP, NF1),
	PAD_CFG_NF(GPP_A3, UP_20K, DEEP, NF1),
	PAD_CFG_NF(GPP_A4, UP_20K, DEEP, NF1),
	PAD_CFG_NF(GPP_A5, DN_20K, DEEP, NF1),
	PAD_CFG_NF(GPP_A6, NONE, DEEP, NF1),
	PAD_CFG_GPO(GPP_A7, 0, DEEP),
	PAD_CFG_GPO(GPP_A8, 0, DEEP),
	PAD_CFG_GPO(GPP_A9, 0, DEEP),
	PAD_CFG_NF(GPP_A10, UP_20K, DEEP, NF1),
	PAD_CFG_GPI(GPP_A11, UP_20K, DEEP),
	PAD_CFG_GPO(GPP_A12, 0, DEEP),
	PAD_CFG_GPO(GPP_A13, 0, DEEP),
	PAD_CFG_GPO(GPP_A14, 0, DEEP),
	_PAD_CFG_STRUCT(GPP_B0, 0x40100100, 0x3000),
	PAD_CFG_GPI(GPP_B1, NONE, DEEP),
	PAD_CFG_GPI(GPP_B2, NONE, DEEP),
	PAD_CFG_GPO(GPP_B3, 1, PLTRST),
	PAD_CFG_GPO(GPP_B4, 0, DEEP),
	PAD_CFG_GPO(GPP_B5, 0, DEEP),
	PAD_CFG_GPO(GPP_B6, 0, DEEP),
	PAD_CFG_GPO(GPP_B7, 0, DEEP),
	PAD_CFG_GPO(GPP_B8, 0, DEEP),
	PAD_CFG_GPO(GPP_B9, 0, DEEP),
	PAD_CFG_GPO(GPP_B10, 0, DEEP),
	PAD_CFG_GPO(GPP_B11, 0, DEEP),
	PAD_CFG_GPO(GPP_B12, 0, DEEP),
	PAD_CFG_NF(GPP_B13, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_B14, NONE, DEEP, NF1),
	PAD_CFG_GPO(GPP_B15, 0, DEEP),
	PAD_CFG_GPO(GPP_B16, 0, DEEP),
	PAD_CFG_GPO(GPP_B17, 0, DEEP),
	PAD_CFG_NF(GPP_B18, NONE, PWROK, NF1),
	PAD_CFG_GPO(GPP_B19, 1, DEEP),
	PAD_CFG_GPO(GPP_B20, 0, DEEP),
	_PAD_CFG_STRUCT(GPP_B21, 0x42880100, 0x0000),
	PAD_CFG_GPO(GPP_B22, 0, DEEP),
	PAD_CFG_GPI(GPP_B23, NONE, DEEP),
	PAD_CFG_NF(GPP_C0, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_C1, NONE, DEEP, NF1),
	PAD_CFG_GPI(GPP_C2, NONE, DEEP),
	PAD_CFG_NF(GPP_C3, NONE, DEEP, NF3),
	PAD_CFG_NF(GPP_C4, NONE, DEEP, NF3),
	PAD_CFG_GPO(GPP_C5, 0, DEEP),
	PAD_CFG_GPI(GPP_C6, NONE, DEEP),
	PAD_CFG_GPI(GPP_C7, NONE, DEEP),
	PAD_CFG_GPI(GPP_C8, NONE, DEEP),
	PAD_CFG_GPO(GPP_C9, 0, DEEP),
	PAD_CFG_GPO(GPP_C10, 0, DEEP),
	PAD_CFG_GPO(GPP_C11, 0, DEEP),
	PAD_CFG_GPO(GPP_C12, 0, DEEP),
	PAD_CFG_GPO(GPP_C13, 0, DEEP),
	PAD_CFG_GPO(GPP_C14, 0, DEEP),
	PAD_CFG_GPO(GPP_C15, 0, DEEP),
	PAD_CFG_NF(GPP_C16, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_C17, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_C18, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_C19, NONE, DEEP, NF1),
	PAD_CFG_GPO(GPP_C20, 0, DEEP),
	PAD_CFG_GPO(GPP_C21, 0, DEEP),
	PAD_CFG_GPO(GPP_C22, 0, DEEP),
	PAD_CFG_GPO(GPP_C23, 0, DEEP),
	PAD_CFG_GPO(GPP_D0, 0, DEEP),
	PAD_CFG_GPO(GPP_D1, 0, DEEP),
	PAD_CFG_GPO(GPP_D2, 0, DEEP),
	PAD_CFG_GPO(GPP_D3, 0, DEEP),
	PAD_CFG_GPO(GPP_D4, 0, DEEP),
	PAD_CFG_GPO(GPP_D5, 0, DEEP),
	PAD_CFG_GPO(GPP_D6, 0, DEEP),
	PAD_CFG_GPO(GPP_D7, 0, DEEP),
	PAD_NC(GPP_D8, NONE),
	PAD_CFG_NF(GPP_D9, NATIVE, DEEP, NF1),
	PAD_CFG_NF(GPP_D10, NATIVE, DEEP, NF1),
	PAD_CFG_NF(GPP_D11, NATIVE, DEEP, NF1),
	PAD_CFG_NF(GPP_D12, NATIVE, DEEP, NF1),
	PAD_CFG_NF(GPP_D13, NATIVE, DEEP, NF1),
	PAD_CFG_NF(GPP_D14, NATIVE, DEEP, NF1),
	PAD_CFG_NF(GPP_D15, NATIVE, DEEP, NF1),
	PAD_CFG_NF(GPP_D16, NATIVE, DEEP, NF1),
	PAD_CFG_NF(GPP_D17, NATIVE, DEEP, NF1),
	PAD_CFG_NF(GPP_D18, NATIVE, DEEP, NF1),
	PAD_CFG_NF(GPP_D19, NATIVE, DEEP, NF1),
	PAD_CFG_NF(GPP_D20, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_D21, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_D22, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_D23, NONE, DEEP, NF1),
	PAD_CFG_GPO(GPP_E0, 0, DEEP),
	PAD_CFG_GPO(GPP_E1, 0, DEEP),
	PAD_CFG_GPI(GPP_E2, NONE, DEEP),
	PAD_CFG_GPI(GPP_E3, NONE, DEEP),
	PAD_CFG_GPO(GPP_E4, 0, DEEP),
	PAD_CFG_GPO(GPP_E5, 0, DEEP),
	PAD_CFG_GPO(GPP_E6, 0, DEEP),
	_PAD_CFG_STRUCT(GPP_E7, 0x80100100, 0x0000),
	PAD_CFG_NF(GPP_E8, NONE, DEEP, NF1),
	PAD_CFG_GPI(GPP_E9, NONE, DEEP),
	PAD_CFG_GPI(GPP_E10, NONE, DEEP),
	PAD_CFG_GPI(GPP_E11, NONE, DEEP),
	PAD_CFG_GPI(GPP_E12, NONE, DEEP),
	PAD_CFG_GPO(GPP_E13, 0, DEEP),
	PAD_CFG_GPO(GPP_E14, 0, DEEP),
	PAD_CFG_GPO(GPP_E15, 0, DEEP),
	PAD_CFG_GPO(GPP_E16, 0, DEEP),
	PAD_CFG_GPI(GPP_E17, NONE, DEEP),
	PAD_CFG_GPO(GPP_E18, 1, DEEP),
	PAD_CFG_GPO(GPP_E19, 0, DEEP),
	PAD_CFG_GPO(GPP_E20, 0, DEEP),
	PAD_CFG_GPO(GPP_E21, 0, DEEP),
	PAD_CFG_NF(GPP_F0, UP_20K, DEEP, NF1),
	PAD_CFG_GPO(GPP_F1, 0, DEEP),
	PAD_CFG_GPO(GPP_F2, 1, DEEP),
	PAD_CFG_GPO(GPP_F3, 0, DEEP),
	PAD_CFG_GPO(GPP_F4, 0, DEEP),
	PAD_NC(GPP_F5, NONE),
	PAD_CFG_GPO(GPP_F6, 0, DEEP),
	PAD_CFG_GPI(GPP_F7, NONE, DEEP),
	PAD_CFG_GPI(GPP_F8, NONE, PLTRST),
	PAD_CFG_GPO(GPP_F9, 0, DEEP),
	PAD_CFG_GPI(GPP_F10, NONE, DEEP),
	PAD_CFG_GPO(GPP_F11, 0, DEEP),
	PAD_CFG_GPO(GPP_F12, 0, DEEP),
	PAD_CFG_GPO(GPP_F13, 0, DEEP),
	PAD_CFG_GPO(GPP_F14, 0, DEEP),
	PAD_CFG_GPI(GPP_F15, NONE, DEEP),
	PAD_CFG_GPO(GPP_F16, 0, DEEP),
	PAD_CFG_GPI(GPP_F17, NONE, DEEP),
	PAD_CFG_GPO(GPP_F18, 0, DEEP),
	PAD_CFG_NF(GPP_F19, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_F20, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_F21, NONE, DEEP, NF1),
	PAD_CFG_GPO(GPP_F22, 0, DEEP),
	PAD_CFG_GPO(GPP_F23, 0, DEEP),
	PAD_CFG_GPO(GPP_G0, 0, DEEP),
	PAD_CFG_GPO(GPP_G1, 0, DEEP),
	PAD_CFG_GPO(GPP_G2, 0, DEEP),
	PAD_CFG_GPI(GPP_G3, NONE, DEEP),
	PAD_CFG_GPI(GPP_G4, NONE, DEEP),
	PAD_CFG_NF(GPP_G5, NONE, DEEP, NF1),
	PAD_CFG_GPI(GPP_G6, NONE, DEEP),
	PAD_CFG_GPI(GPP_G7, NONE, DEEP),
	PAD_CFG_GPI(GPP_H0, NONE, DEEP),
	PAD_CFG_GPO(GPP_H1, 0, DEEP),
	PAD_CFG_GPI(GPP_H2, NONE, DEEP),
	PAD_NC(GPP_H3, NONE),
	PAD_CFG_NF(GPP_H4, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_H5, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_H6, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_H7, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_H8, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_H9, NONE, DEEP, NF1),
	PAD_CFG_GPO(GPP_H10, 0, DEEP),
	PAD_CFG_GPO(GPP_H11, 0, DEEP),
	PAD_CFG_GPO(GPP_H12, 0, DEEP),
	PAD_CFG_GPO(GPP_H13, 0, DEEP),
	PAD_CFG_GPO(GPP_H14, 0, DEEP),
	PAD_CFG_GPO(GPP_H15, 0, DEEP),
	PAD_CFG_GPO(GPP_H16, 0, DEEP),
	PAD_CFG_GPO(GPP_H17, 0, DEEP),
	PAD_CFG_GPO(GPP_H18, 0, DEEP),
	PAD_CFG_GPO(GPP_H19, 0, DEEP),
	PAD_CFG_GPO(GPP_H20, 0, DEEP),
	PAD_CFG_GPO(GPP_H21, 0, DEEP),
	PAD_CFG_GPO(GPP_H22, 0, DEEP),
	PAD_CFG_GPO(GPP_H23, 0, DEEP),
	_PAD_CFG_STRUCT(GPP_I0, 0x86880100, 0x0000),
	PAD_CFG_NF(GPP_I1, NONE, DEEP, NF1),
	_PAD_CFG_STRUCT(GPP_I2, 0x86880100, 0x0000),
	PAD_CFG_NF(GPP_I3, NONE, DEEP, NF1),
	_PAD_CFG_STRUCT(GPP_I4, 0x86880100, 0x0000),
	PAD_CFG_GPO(GPP_I5, 0, DEEP),
	PAD_CFG_GPO(GPP_I6, 0, DEEP),
	PAD_CFG_GPO(GPP_I7, 0, DEEP),
	PAD_CFG_GPO(GPP_I8, 0, DEEP),
	PAD_CFG_GPO(GPP_I9, 0, DEEP),
	PAD_CFG_GPO(GPP_I10, 0, DEEP),
	PAD_CFG_GPI(GPP_I11, NONE, DEEP),
	PAD_CFG_GPI(GPP_I12, NONE, DEEP),
	PAD_CFG_GPI(GPP_I13, NONE, DEEP),
	PAD_CFG_GPI(GPP_I14, NONE, DEEP),
	PAD_CFG_GPO(GPP_I15, 0, DEEP),
	PAD_CFG_GPO(GPP_I16, 0, DEEP),
	PAD_CFG_GPO(GPP_I17, 0, DEEP),
	PAD_CFG_GPO(GPP_I18, 0, DEEP),
	PAD_CFG_GPO(GPP_I19, 0, DEEP),
	PAD_CFG_GPO(GPP_I20, 0, DEEP),
	PAD_CFG_GPO(GPP_I21, 0, DEEP),
	PAD_CFG_GPO(GPP_I22, 0, DEEP),
	PAD_CFG_NF(GPP_J0, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_J1, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_J2, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_J3, UP_20K, DEEP, NF1),
	PAD_CFG_NF(GPP_J4, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_J5, UP_20K, DEEP, NF1),
	PAD_CFG_NF(GPP_J6, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_J7, NONE, DEEP, NF1),
	PAD_CFG_GPI(GPP_J8, NONE, DEEP),
	PAD_CFG_GPO(GPP_J9, 0, DEEP),
	PAD_CFG_GPO(GPP_J10, 0, DEEP),
	PAD_CFG_GPO(GPP_J11, 0, DEEP),
	_PAD_CFG_STRUCT(GPP_K0, 0x42800100, 0x0000),
	PAD_CFG_GPO(GPP_K1, 0, DEEP),
	PAD_CFG_GPO(GPP_K2, 0, DEEP),
	PAD_CFG_GPO(GPP_K3, 1, PLTRST),
	PAD_CFG_GPO(GPP_K4, 0, PWROK),
	PAD_CFG_GPO(GPP_K5, 0, DEEP),
	PAD_CFG_NF(GPP_K6, NONE, DEEP, NF2),
	PAD_CFG_NF(GPP_K7, NONE, DEEP, NF2),
	PAD_CFG_NF(GPP_K8, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_K9, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_K10, NONE, DEEP, NF2),
	PAD_CFG_GPO(GPP_K11, 0, DEEP),
	PAD_CFG_NF(GPP_R0, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_R1, NATIVE, DEEP, NF1),
	PAD_CFG_NF(GPP_R2, NATIVE, DEEP, NF1),
	PAD_CFG_NF(GPP_R3, NATIVE, DEEP, NF1),
	PAD_CFG_NF(GPP_R4, NONE, DEEP, NF1),
	PAD_CFG_GPO(GPP_R5, 0, DEEP),
	PAD_CFG_GPO(GPP_R6, 0, DEEP),
	PAD_CFG_GPO(GPP_R7, 0, DEEP),
	PAD_CFG_GPI(GPP_R8, NONE, DEEP),
	PAD_CFG_NF(GPP_R9, NONE, DEEP, NF1),
	PAD_CFG_GPO(GPP_R10, 0, DEEP),
	PAD_CFG_GPO(GPP_R11, 0, DEEP),
	PAD_CFG_GPO(GPP_R12, 0, DEEP),
	PAD_CFG_GPO(GPP_R13, 0, DEEP),
	PAD_CFG_GPO(GPP_R14, 0, DEEP),
	PAD_CFG_GPO(GPP_R15, 0, DEEP),
	PAD_CFG_GPO(GPP_R16, 0, DEEP),
	PAD_CFG_GPO(GPP_R17, 0, DEEP),
	PAD_CFG_GPO(GPP_R18, 0, DEEP),
	PAD_CFG_GPI(GPP_R19, NONE, DEEP),
	PAD_CFG_GPO(GPP_R20, 0, DEEP),
	PAD_CFG_GPO(GPP_R21, 0, DEEP),
	PAD_CFG_GPO(GPP_S0, 0, DEEP),
	PAD_CFG_GPO(GPP_S1, 0, DEEP),
	PAD_CFG_GPO(GPP_S2, 0, DEEP),
	PAD_CFG_GPO(GPP_S3, 0, DEEP),
	PAD_CFG_GPO(GPP_S4, 0, DEEP),
	PAD_CFG_GPO(GPP_S5, 0, DEEP),
	PAD_CFG_GPO(GPP_S6, 0, DEEP),
	PAD_CFG_GPO(GPP_S7, 0, DEEP),
};

#endif

#endif
