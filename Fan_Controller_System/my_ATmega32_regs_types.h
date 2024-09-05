/*
 ============================================================================
 Name        : my_ATmega32_regs_types.h
 Author      : Abd-Elrahman Adel
 Description : Fan controller System Project
 Date        : 25/9/2023
 ============================================================================
 */

#ifndef MY_ATMEGA32_REGS_TYPES_H
#define MY_ATMEGA32_REGS_TYPES_H

#include "my_std_types.h"

/*******************************GPIO Registers type structure declarations**********************************/

typedef union
{
	uint8 Byte;
	struct
	{
		uint8 Bit0 :1;
		uint8 Bit1 :1;
		uint8 Bit2 :1;
		uint8 Bit3 :1;
		uint8 Bit4 :1;
		uint8 Bit5 :1;
		uint8 Bit6 :1;
		uint8 Bit7 :1;
	} Bits;
} GPIO_Reg_Type;

/***********************************************************************************************************/

/*******************************Timers Registers type structure declarations********************************/

typedef union
{
	uint8 Byte;
	struct
	{
		uint8 C :1;
		uint8 Z :1;
		uint8 N :1;
		uint8 V :1;
		uint8 S :1;
		uint8 H :1;
		uint8 T :1;
		uint8 I :1;
	} Bits;

} SREG_Type;

typedef union
{
	uint8 Byte;
	struct
	{
		uint8 TOIE0 :1;
		uint8 OCIE0 :1;
		uint8 TOIE1 :1;
		uint8 OCIE1B :1;
		uint8 OCIE1A :1;
		uint8 TICIE1 :1;
		uint8 TOIE2 :1;
		uint8 OCIE2 :1;
	} Bits;

} Timers_TIMSK_Type;

/***********************************************************************************************************/

/*******************************Timer0 Registers type structure declarations********************************/

typedef union
{
	uint8 Byte;
	struct
	{
		uint8 CS00 :1;
		uint8 CS01 :1;
		uint8 CS02 :1;
		uint8 WGM01 :1;
		uint8 COM00 :1;
		uint8 COM01 :1;
		uint8 WGM00 :1;
		uint8 FOC0 :1;
	} Bits;

} Timer0_TCCR0_Type;

typedef union
{
	uint8 Byte;
} Timer0_OCR0_Type;

typedef union
{
	uint8 Byte;
} Timer0_TCNT0_Type;

/***********************************************************************************************************/

/**********************************ADC Registers type structure declarations********************************/

typedef union
{
	uint8 Byte;
	struct
	{
		uint8 MUX0 :1;
		uint8 MUX1 :1;
		uint8 MUX2 :1;
		uint8 MUX3 :1;
		uint8 MUX4 :1;
		uint8 ADLAR :1;
		uint8 REFS0 :1;
		uint8 REFS1 :1;
	} Bits;

} ADC_ADMUX_Type;

typedef union
{
	uint8 Byte;
	struct
	{
		uint8 ADPS0 :1;
		uint8 ADPS1 :1;
		uint8 ADPS2 :1;
		uint8 ADIE :1;
		uint8 ADIF :1;
		uint8 ADATE :1;
		uint8 ADSC :1;
		uint8 ADEN :1;
	} Bits;

} ADC_ADCSRA_Type;

typedef union
{
	uint16 TwoBytes;
	struct
	{
		uint16 ADC0 :1;
		uint16 ADC1 :1;
		uint16 ADC2 :1;
		uint16 ADC3 :1;
		uint16 ADC4 :1;
		uint16 ADC5 :1;
		uint16 ADC6 :1;
		uint16 ADC7 :1;
		uint16 ADC8 :1;
		uint16 ADC9 :1;
		uint16 :1;
		uint16 :1;
		uint16 :1;
		uint16 :1;
		uint16 :1;
		uint16 :1;
	} Bits;

} ADC_ADC_Type;

typedef union
{
	uint8 Byte;
	struct
	{
		uint8 PSR10 :1;
		uint8 PSR2 :1;
		uint8 PUD :1;
		uint8 ACME :1;
		uint8 :1;
		uint8 ADTS0 :1;
		uint8 ADTS1 :1;
		uint8 ADTS2 :1;
	} Bits;

} ADC_SFIOR_TYPE;

/***********************************************************************************************************/
#endif /*MY_ATMEGA32_REGS_TYPES_H*/
