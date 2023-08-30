/*
 * swv_write.h
 *
 *  Created on: Aug 29, 2023
 *      Author: Kkang
 */

#ifndef INC_SWV_WRITE_H_
#define INC_SWV_WRITE_H_

#include <stdio.h>
#include "stm32g4xx_hal.h"
#include "core_cm4.h"

int _write(int32_t file, uint8_t *ptr, int32_t len);

#endif /* INC_SWV_WRITE_H_ */
