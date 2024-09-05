/*
 ============================================================================
 Name        : my_adc.c
 Author      : Abd-Elrahman Adel
 Description : Fan controller System Project
 Date        : 10/10/2023
 ============================================================================
 */
#include "my_adc.h"
#include "my_ATmega32_regs.h"
#include "my_ATmega32_interrupts.h"

/************************************************Global Variables******************************************/

volatile uint16 g_adcResult = 0;

/**********************************************************************************************************/

/***********************************************ISR's Definitions******************************************/

ISR(ADC_vect)
{
	g_adcResult = ADC.TwoBytes;
}

/**********************************************************************************************************/

/**********************************************Functions Definitions***************************************/

void ADC_init(const ADC_ConfigType *Config_Ptr)
{
	/*clearing the two registers that I will modify*/
	ADMUX.Byte = 0;
	ADCSRA.Byte = 0;

	ADMUX.Byte = (ADMUX.Byte & 0xE0) | (Config_Ptr->channel); /*configuring the channel number*/
	ADMUX.Bits.ADLAR = Config_Ptr->adlar; /*configuring the ADLAR bit*/
	ADMUX.Byte = (ADMUX.Byte & 0x3F) | ((Config_Ptr->ref_volt) << 6); /*configuring the voltage reference*/

	ADCSRA.Byte = (ADCSRA.Byte & 0xF8) | (Config_Ptr->prescaler);
	ADCSRA.Bits.ADIE = Config_Ptr->interrupt;
	ADCSRA.Bits.ADATE = Config_Ptr->auto_trigger;
	ADCSRA.Bits.ADEN = 1;
}
uint16 ADC_readChannel_polling(uint8 channel_num)
{
	ADMUX.Byte = (ADMUX.Byte & 0xE0) | (channel_num);
	ADCSRA.Bits.ADSC = 1;

	while (ADCSRA.Bits.ADIF == 0)
		;
	ADCSRA.Bits.ADIF = 1;
	return ADC.TwoBytes;
}

void ADC_readChannel_interrupt(uint8 channel_num)
{
	ADMUX.Byte = (ADMUX.Byte & 0xE0) | (channel_num);
	ADCSRA.Bits.ADSC = 1;
}

/**********************************************************************************************************/

