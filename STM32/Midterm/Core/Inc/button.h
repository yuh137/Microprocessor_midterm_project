/*
 * button.h
 *
 *  Created on: Nov 5, 2022
 *      Author: FPTSHOP
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

//extern int button1_flag;

int isResetButtonPressed();
int isIncreaseButtonPressed();
int isDecreaseButtonPressed();

void getKeyInput();

#endif /* INC_BUTTON_H_ */
