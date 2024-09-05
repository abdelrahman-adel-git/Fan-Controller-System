/*
 ============================================================================
 Name        : Fan_Controller_System.c
 Author      : Abd-Elrahman Adel
 Description : Fan controller System Project
 Date        : 11/10/2023
 ============================================================================
 */

#include "Fan_Controller_System.h"

#include "my_adc.h"
#include "my_lcd.h"
#include "my_lm35.h"
#include "my_dcMotor.h"
#include "my_pwmTimer0.h"

extern Fan_State currentFanState;

int main(void)
{
	uint8 temp;
	ADC_ConfigType adc_config =
	{ ADC_VOLTAGE_REFERENCE_INITIAL_CONFIG, ADC_PRESCALER_INITIAL_CONFIG, ADC_CHANNEL_INITIAL_CONFIG, ADC_ADLAR_ADJUST_INITIAL_CONFIG, ADC_INTERRUPT_INITIAL_CONFIG, ADC_AUTO_TRIGGER_INITIAL_CONFIG };

	DcMotor_Init();
	LCD_init();
	ADC_init(&adc_config);

	LCD_moveCursor(1, 4);
	LCD_displayString("Temp =    C");

	for (;;)
	{
		temp = LM35_getTemperature();
		displayTemperature(temp);
		adjustFanSpeedByTemperature(temp);
		displayFanState(currentFanState);
	}
}

