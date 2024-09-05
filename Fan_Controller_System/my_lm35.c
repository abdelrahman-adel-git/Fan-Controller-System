/*
 ============================================================================
 Name        : my_lm35.c
 Author      : Abd-Elrahman Adel
 Description : Fan controller System Project
 Date        : 11/10/2023
 ============================================================================
 */
#include "my_lm35.h"
#include "my_adc.h"
#include "util/delay.h"
/*extern volatile uint16_t g_adcResult;*/
uint8 LM35_getTemperature(void)
{
	uint8 temp_value = 0;
	uint16 adc_value = 0;

	adc_value = ADC_readChannel_polling(SENSOR_CHANNEL_ID);

	temp_value = (uint8) (((uint32) adc_value * SENSOR_MAX_TEMPERATURE * ADC_REF_VOLT_VALUE) / (ADC_MAXIMUM_VALUE * SENSOR_MAX_VOLT_VALUE));

	return temp_value;
}
