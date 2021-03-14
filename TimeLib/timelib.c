/*
 * timelib.c
 *
 *  Created on: Mar 14, 2021
 *      Author: Mohamed Amin Rezgui
 */

#include "timelib.h"
#include <stdint.h>
#include "tim.h"
#include <stdio.h>

static uint64_t time_raw = 0;

void timelib_init()
{
	HAL_TIM_Base_Start_IT(&htim6);
	HAL_TIM_Base_Start_IT(&htim7);
}

uint64_t timelib_getRawTime()
{
	return time_raw;
}

void timelib_updateTimeCount()
{
	time_raw++;

}

void timelib_printTime()
{
	uint8_t ms = time_raw % 100;
	uint8_t sec = (time_raw % 6000)/100;
	uint8_t min = (time_raw % 360000)/6000;
	uint8_t hrs = time_raw/360000;
	printf("Time is %.2u:%.2u:%.2u:%.3u\n\r",hrs,min,sec,ms);


}


