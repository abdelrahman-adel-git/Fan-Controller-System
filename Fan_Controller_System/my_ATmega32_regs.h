/*
 ============================================================================
 Name        : my_ATmega32_regs.h
 Author      : Abd-Elrahman Adel
 Description : Fan controller System Project
 Date        : 25/9/2023
 ============================================================================
 */

#ifndef MY_ATMEGA32_REGS_H
#define MY_ATMEGA32_REGS_H

#include "my_ATmega32_regs_types.h"

/****************************************GPIO_REGISTERS_DEFINITIONS****************************************/

#define PORTA (*(volatile GPIO_Reg_Type *const)0x3B)
#define DDRA (*(volatile GPIO_Reg_Type *const)0x3A)
#define PINA (*(volatile GPIO_Reg_Type const *const)0x39)

#define PORTB (*(volatile GPIO_Reg_Type *const)0x38)
#define DDRB (*(volatile GPIO_Reg_Type *const)0x37)
#define PINB (*(volatile GPIO_Reg_Type const *const)0x36)

#define PORTC (*(volatile GPIO_Reg_Type *const)0x35)
#define DDRC (*(volatile GPIO_Reg_Type *const)0x34)
#define PINC (*(volatile GPIO_Reg_Type const *const)0x33)

#define PORTD (*(volatile GPIO_Reg_Type *const)0x32)
#define DDRD (*(volatile GPIO_Reg_Type *const)0x31)
#define PIND (*(volatile GPIO_Reg_Type const *const)0x30)

/***********************************************************************************************************/

/****************************************TIMERS_REGISTERS_DEFINITIONS***************************************/

#define SREG (*(volatile SREG_Type *const)0x5F)
#define TIMSK (*(volatile Timers_TIMSK_Type *const)0x59)

/***********************************************************************************************************/

/****************************************TIMER0_REGISTERS_DEFINITIONS***************************************/

#define OCR0 (*(volatile Timer0_OCR0_Type *const)0x5C)
#define TCCR0 (*(volatile Timer0_TCCR0_Type *const)0x53)
#define TCNT0 (*(volatile Timer0_TCNT0_Type *const)0x52)

/***********************************************************************************************************/

/*******************************************ADC_REGISTERS_DEFINITIONS***************************************/

#define ADMUX (*(volatile ADC_ADMUX_Type *const)0x27)
#define ADCSRA (*(volatile ADC_ADCSRA_Type *const)0x26)
#define ADC (*(volatile ADC_ADC_Type *const)0x24)
#define SFIOR (*(volatile ADC_SFIOR_TYPE *const)0x50)

/***********************************************************************************************************/

#endif /*MY_ATMEGA32_REGS_H*/
