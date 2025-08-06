/*
 * IO.h
 *
 *  Created on: Sep. 26, 2020
 *      Author: Alka
 */

#ifndef IO_H_
#define IO_H_

#endif /* IO_H_ */

#include "main.h"

void changeToOutput(void);
void changeToInput(void);
void receiveDshotDma(void);
void sendDshotDma(void);

uint8_t getInputPinState(void);
void setInputPolarityRising(void);
void setInputPullDown(void);
void setInputPullUp(void);
void enableHalfTransferInt(void);
void setInputPullNone(void);

extern char inputSet;
extern char dshot;
extern char servoPwm;
extern char send_telemetry;
extern uint8_t degrees_celsius;

extern uint16_t ADC_raw_volts;
