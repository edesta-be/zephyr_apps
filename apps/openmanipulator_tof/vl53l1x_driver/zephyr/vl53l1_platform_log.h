/* VL53L1X_platform_log.h - Zephyr customization of ST vl53l1x library,
 * logging functions, not implemented
 */

/*
 * Copyright (c) 2017 STMicroelectronics
 *
 * SPDX-License-Identifier: Apache-2.0
 */


#ifndef ZEPHYR_DRIVERS_SENSOR_VL53L1X_VL53L1X_PLATFORM_LOG_H_
#define ZEPHYR_DRIVERS_SENSOR_VL53L1X_VL53L1X_PLATFORM_LOG_H_

#include <stdio.h>
#include <string.h>
/* LOG Functions */

#ifdef __cplusplus
extern "C" {
#endif

enum {
	TRACE_LEVEL_NONE,
	TRACE_LEVEL_ERRORS,
	TRACE_LEVEL_WARNING,
	TRACE_LEVEL_INFO,
	TRACE_LEVEL_DEBUG,
	TRACE_LEVEL_ALL,
	TRACE_LEVEL_IGNORE
};

enum {
	TRACE_FUNCTION_NONE = 0,
	TRACE_FUNCTION_I2C  = 1,
	TRACE_FUNCTION_ALL  = 0x7fffffff /* all bits except sign */
};

enum {
	TRACE_MODULE_NONE              = 0x0,
	TRACE_MODULE_API               = 0x1,
	TRACE_MODULE_PLATFORM          = 0x2,
	TRACE_MODULE_ALL               = 0x7fffffff /* all bits except sign */
};

	#define		VL53L1_TRACE_LEVEL_NONE			0x00000000
	#define		VL53L1_TRACE_LEVEL_ERRORS		0x00000001
	#define		VL53L1_TRACE_LEVEL_WARNING		0x00000002
	#define		VL53L1_TRACE_LEVEL_INFO			0x00000004
	#define		VL53L1_TRACE_LEVEL_DEBUG		0x00000008
	#define		VL53L1_TRACE_LEVEL_ALL			0x00000010
	#define		VL53L1_TRACE_LEVEL_IGNORE		0x00000020

	#define		VL53L1_TRACE_FUNCTION_NONE		0x00000000
	#define		VL53L1_TRACE_FUNCTION_I2C		0x00000001
	#define		VL53L1_TRACE_FUNCTION_ALL		0x7fffffff

	#define		VL53L1_TRACE_MODULE_NONE		0x00000000
	#define		VL53L1_TRACE_MODULE_API			0x00000001
	#define		VL53L1_TRACE_MODULE_CORE		0x00000002
	#define		VL53L1_TRACE_MODULE_PROTECTED		0x00000004
	#define		VL53L1_TRACE_MODULE_HISTOGRAM		0x00000008
	#define		VL53L1_TRACE_MODULE_REGISTERS		0x00000010
	#define		VL53L1_TRACE_MODULE_PLATFORM		0x00000020
	#define		VL53L1_TRACE_MODULE_NVM			0x00000040
	#define		VL53L1_TRACE_MODULE_CALIBRATION_DATA	0x00000080
	#define		VL53L1_TRACE_MODULE_NVM_DATA		0x00000100
	#define		VL53L1_TRACE_MODULE_HISTOGRAM_DATA	0x00000200
	#define		VL53L1_TRACE_MODULE_RANGE_RESULTS_DATA	0x00000400
	#define		VL53L1_TRACE_MODULE_XTALK_DATA		0x00000800
	#define		VL53L1_TRACE_MODULE_OFFSET_DATA		0x00001000
	#define		VL53L1_TRACE_MODULE_DATA_INIT		0x00002000
    #define		VL53L1_TRACE_MODULE_REF_SPAD_CHAR	0x00004000
    #define		VL53L1_TRACE_MODULE_SPAD_RATE_MAP	0x00008000
	#ifdef PAL_EXTENDED
		#define	VL53L1_TRACE_MODULE_SPAD		0x01000000
		#define	VL53L1_TRACE_MODULE_FMT			0x02000000
		#define	VL53L1_TRACE_MODULE_UTILS		0x04000000
		#define	VL53L1_TRACE_MODULE_BENCH_FUNCS	0x08000000
	#endif
	#define		VL53L1_TRACE_MODULE_CUSTOMER_API	0x40000000
	#define		VL53L1_TRACE_MODULE_ALL			0x7fffffff

#define _LOG_FUNCTION_START(module, fmt, ...) (void)0
#define _LOG_FUNCTION_END(module, status, ...) (void)0
#define _LOG_FUNCTION_END_FMT(module, status, fmt, ...) (void)0
#define _LOG_TRACE_PRINT(module, level, function, ...) (void)0

#define VL53L1X_COPYSTRING(str, ...) strcpy(str, ##__VA_ARGS__)

#ifdef __cplusplus
}
#endif

#endif  /* ZEPHYR_DRIVERS_SENSOR_VL53L1X_VL53L1X_PLATFORM_LOG_H_ */
