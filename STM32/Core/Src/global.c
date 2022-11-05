/*
 * global.c
 *
 *  Created on: Nov 5, 2022
 *      Author: FPTSHOP
 */
#include "global.h"
#include "main.h"

void display7SEG(uint8_t num){
	switch (num){
	case 0:
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG6_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG3_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG6_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG2_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG6_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG6_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG3_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG6_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG6_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG6_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG3_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG6_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG6_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, SEG6_Pin, RESET);
		break;
	default:
		HAL_GPIO_WritePin(GPIOB, SEG0_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG1_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG2_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG3_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, SEG6_Pin, SET);
		break;
	}
}

void update7SEG(){

}
