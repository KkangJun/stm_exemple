/*
 * binary_msg.c
 *
 *  Created on: Aug 29, 2023
 *      Author: Kkang
 */

#include <stdint.h>
#include "binary_msg.h"

void Increase_Binary(uint8_t *num, MessageQ *pMsgQ) {
	for (uint8_t i = 0; i < 4; i++) {
		pMsgQ->param[i] = 0;
	}

	if (*num & 0b0001) {
		pMsgQ->param[0] = 1;
	}
	if (*num & 0b0010) {
		pMsgQ->param[1] = 1;
	}
	if (*num & 0b0100) {
		pMsgQ->param[2] = 1;
	}
	if (*num & 0b1000) {
		pMsgQ->param[3] = 1;
	}
}
