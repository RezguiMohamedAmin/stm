/*
 * timerlib.h
 *
 *  Created on: Mar 14, 2021
 *      Author: Mohamed Amin Rezgui
 */

#ifndef TIMELIB_H_
#define TIMELIB_H_
#include "stdint.h"

void timelib_updateTimeCount();
uint64_t timelib_getRawTime();
void timelib_init();
void timelib_printTime();

#endif /* TIMELIB_H_ */
