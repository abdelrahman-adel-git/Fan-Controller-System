/*
 ============================================================================
 Name        : my_pwmTimer0.c
 Author      : Abd-Elrahman Adel
 Description : Fan controller System Project
 Date        : 11/10/2023
 ============================================================================
 */
#include "my_pwmTimer0.h"
#include "my_ATmega32_regs.h"
#include "my_dcMotor.h"
void PWM_Timer0_Start(uint8 duty_cycle)
{
	TCNT0.Byte = 0;

	OCR0.Byte = (duty_cycle * 2.55);

	GPIO_setupPinDirection(DCMOTOR_E1_PORT_ID, DCMOTOR_E1_PIN_ID, PIN_OUTPUT);

	TCCR0.Bits.WGM00 = 1;
	TCCR0.Bits.WGM01 = 1;
	TCCR0.Bits.COM01 = 1;
	TCCR0.Bits.CS01 = 1;
}
