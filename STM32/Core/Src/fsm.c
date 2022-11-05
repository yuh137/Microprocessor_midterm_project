/*
 * fsm.c
 *
 *  Created on: Nov 5, 2022
 *      Author: FPTSHOP
 */

#include "fsm.h"
#include "main.h"
#include "global.h"
#include "software_timer.h"

int status = 0;
int led_counter = 0;

void fsm_simple_button_run(){
	switch (status){
	case REST_STATE:
		break;
	case RESET_EVENT:
		led_counter = 0;
		display7SEG(led_counter);
		status = REST_STATE;
		setTimer1(10000);
		break;
	case INCREASE:
		led_counter++;
		if (led_counter > 9){
			led_counter = 0;
		}
		display7SEG(led_counter);
		status = REST_STATE;
		setTimer1(10000);
		break;

	case DECREASE:
		led_counter--;
		if (led_counter < 0){
			led_counter = 9;
		}
		display7SEG(led_counter);
		status = REST_STATE;
		setTimer1(10000);
		break;
	default:
		break;
	}
}

void timeout10s_countdown(){
	led_counter--;
	if (led_counter < 0){
		led_counter = 0;
		status = REST_STATE;
		return;
	}
	display7SEG(led_counter);
}
