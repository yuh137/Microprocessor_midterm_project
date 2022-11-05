/*
 * global.h
 *
 *  Created on: Nov 5, 2022
 *      Author: FPTSHOP
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"

#define REST_STATE 			0
#define INCREASE		1
#define DECREASE		2
#define RESET_EVENT		3

extern int status;
extern int led_counter;

void display7SEG(uint8_t);
void update7SEG();

#endif /* INC_GLOBAL_H_ */
