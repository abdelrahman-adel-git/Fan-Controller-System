/*
 ============================================================================
 Name        : my_lm35.h
 Author      : Abd-Elrahman Adel
 Description : Fan controller System Project
 Date        : 11/10/2023
 ============================================================================
 */
#ifndef MY_LM35_H_
#define MY_LM35_H_

#include "my_gpio.h"
#include "my_std_types.h"

#define SENSOR_CHANNEL_ID         PIN2_ID
#define SENSOR_MAX_VOLT_VALUE     1.5
#define SENSOR_MAX_TEMPERATURE    150

uint8 LM35_getTemperature(void);

#endif /* MY_LM35_H_ */
