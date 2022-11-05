/*
 * button.c
 *
 *  Created on: Nov 5, 2022
 *      Author: FPTSHOP
 */

#include "button.h"
#include "global.h"
#include "fsm.h"

#define NUMBER_OF_BUTTON 3

uint16_t button_list[NUMBER_OF_BUTTON] = {RESET_Pin, INCREASE_Pin, DECREASE_Pin};
int KeyReg0[NUMBER_OF_BUTTON] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg1[NUMBER_OF_BUTTON] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg2[NUMBER_OF_BUTTON] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg3[NUMBER_OF_BUTTON] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};

int TimeOutForKeyPress = 300;
int RESET_flag = 0;
int INCREASE_flag = 0;
int DECREASE_flag = 0;

int isResetButtonPressed(){
	if (RESET_flag == 1){
		status = RESET_EVENT;
		RESET_flag = 0;
		return 1;
	}
	return 0;
}

int isIncreaseButtonPressed(){
	if (INCREASE_flag == 1){
		status = INCREASE;
		INCREASE_flag = 0;
		return 1;
	}
	return 0;
}

int isDecreaseButtonPressed(){
	if (DECREASE_flag == 1){
		status = DECREASE;
		DECREASE_flag = 0;
		return 1;
	}
	return 0;
}

//void subResetKeyProcess(){
//	//TODO
//	//HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
//	RESET_flag = 1;
//}

void getKeyInput(){
	for (int i = 0; i < NUMBER_OF_BUTTON; i++){
		KeyReg0[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg2[i];
		KeyReg2[i] = HAL_GPIO_ReadPin(GPIOB, button_list[i]);
		if ((KeyReg1[i] == KeyReg0[i]) && (KeyReg1[i] == KeyReg2[i])){
			if (KeyReg2[i] != KeyReg3[i]){
			  KeyReg3[i] = KeyReg2[i];

			  if (KeyReg3[i] == PRESSED_STATE){
				TimeOutForKeyPress = 600;
				if (i == 0){
					RESET_flag = 1;
				}
				else if (i == 1){
					INCREASE_flag = 1;
				}
				else if (i == 2){
					DECREASE_flag = 1;
				}
			  }
			}
			else {
			   TimeOutForKeyPress--;
				if (TimeOutForKeyPress == 0){
					if (KeyReg2[i] == PRESSED_STATE){
						if (i == 0){
							RESET_flag = 1;
						}
						else if (i == 1){
							INCREASE_flag = 1;
						}
						else if (i == 2){
							DECREASE_flag = 1;
						}
					}
					TimeOutForKeyPress = 100;
				}
			}
		}
	}
}
