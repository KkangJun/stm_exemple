/*
 * binary_msg.h
 *
 *  Created on: Aug 29, 2023
 *      Author: Kkang
 */

#ifndef INC_BINARY_MSG_H_
#define INC_BINARY_MSG_H_

typedef struct {
	uint8_t param[4];
} MessageQ;

void Increase_Binary(uint8_t *num, MessageQ *pMsgQ);

#endif /* INC_BINARY_MSG_H_ */
