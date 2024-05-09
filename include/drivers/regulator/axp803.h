/*
 * Copyright © 2017-2022 The Crust Firmware Authors.
 * SPDX-License-Identifier: BSD-3-Clause OR GPL-2.0-only
 */

#ifndef DRIVERS_REGULATOR_AXP803_H
#define DRIVERS_REGULATOR_AXP803_H

#include <regulator/axp20x.h>

enum {
	AXP803_REGL_DCDC1,
	AXP803_REGL_DCDC2,
	AXP803_REGL_DCDC3,
	AXP803_REGL_DCDC4,
	AXP803_REGL_DCDC5,
	AXP803_REGL_DCDC6,
	AXP803_REGL_DC1SW,
	AXP803_REGL_ALDO1,
	AXP803_REGL_ALDO2,
	AXP803_REGL_ALDO3,
	AXP803_REGL_DLDO1,
	AXP803_REGL_DLDO2,
	AXP803_REGL_DLDO3,
	AXP803_REGL_DLDO4,
	AXP803_REGL_ELDO1,
	AXP803_REGL_ELDO2,
	AXP803_REGL_ELDO3,
	AXP803_REGL_FLDO1,
	AXP803_REGL_FLDO2,
	AXP803_REGL_COUNT,
};

extern const struct axp20x_regulator axp803_regulator;

#endif /* DRIVERS_REGULATOR_AXP803_H */
