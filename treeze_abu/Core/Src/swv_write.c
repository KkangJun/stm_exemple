/*
 * swv_write.c
 *
 *  Created on: Aug 29, 2023
 *      Author: Kkang
 */

#include "swv_write.h"

int _write(int32_t file, uint8_t *ptr, int32_t len) {
	for (int32_t i = 0; i < len; i++) {
		ITM_SendChar(*ptr++);
	}

	return len;
}
