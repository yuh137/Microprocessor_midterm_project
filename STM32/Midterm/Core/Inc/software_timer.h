/*
 * software_timer.h
 *
 *  Created on: Nov 5, 2022
 *      Author: FPTSHOP
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

int TIMER_CYCLE;
int timer0_counter;
extern int timer0_flag;
int timer1_counter;
extern int timer1_flag;

void setTimer0(int duration);
void setTimer1(int duration);
void timer_run(void);

#endif /* INC_SOFTWARE_TIMER_H_ */
