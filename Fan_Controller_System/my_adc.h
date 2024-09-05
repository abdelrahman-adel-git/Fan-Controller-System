/*
 ============================================================================
 Name        : my_adc.h
 Author      : Abd-Elrahman Adel
 Description : Fan controller System Project
 Date        : 10/10/2023
 ============================================================================
 */

#ifndef MY_ADC_H_
#define MY_ADC_H_
#include "my_ATmega32_regs.h"

/**************************************************ADC_enums***********************************************/

typedef enum
{
	AREF, AVCC, RESERVED, INTERNAL

} ADC_ReferenceVolatgeType;

typedef enum
{
	ADC0, ADC1, ADC2, ADC3, ADC4, ADC5, ADC6, ADC7

} ADC_ChannelType;

typedef enum
{
	RIGHT, LEFT

} ADC_AdlarAdjustType;

typedef enum
{
	FCPU_2 = 1, FCPU_4, FCPU_8, FCPU_16, FCPU_32, FCPU_64, FCPU_128

} ADC_PrescalerType;

typedef enum
{
	ADIE_DISABLE, ADIE_ENABLE

} ADC_InterruptType;

typedef enum
{
	ADATE_DISABLE, ADATE_ENABLE

} ADC_AutoTriggerType;

/**********************************************************************************************************/

/*******************************************ADC_Initial_Configs********************************************/

#define ADC_CHANNEL_INITIAL_CONFIG ADC2
#define ADC_ADLAR_ADJUST_INITIAL_CONFIG RIGHT
#define ADC_VOLTAGE_REFERENCE_INITIAL_CONFIG INTERNAL
#define ADC_PRESCALER_INITIAL_CONFIG FCPU_8
#define ADC_INTERRUPT_INITIAL_CONFIG ADIE_DISABLE
#define ADC_AUTO_TRIGGER_INITIAL_CONFIG ADATE_DISABLE

/*Use this to initialize the ADC configurations easily the first time only, any later configurations will be implemented
 *ADC_ConfigType adc_config = { ADC_VOLTAGE_REFERENCE_INITIAL_CONFIG, ADC_PRESCALER_INITIAL_CONFIG, ADC_CHANNEL_INITIAL_CONFIG, ADC_ADLAR_ADJUST_INITIAL_CONFIG, ADC_INTERRUPT_INITIAL_CONFIG, ADC_AUTO_TRIGGER_INITIAL_CONFIG };*/

#define ADC_MAXIMUM_VALUE    1023
#define ADC_REF_VOLT_VALUE   2.56

/**********************************************************************************************************/

/****************************************ADC Configuration Structure***************************************/

typedef struct
{
	ADC_ReferenceVolatgeType ref_volt;
	ADC_PrescalerType prescaler;
	ADC_ChannelType channel;
	ADC_AdlarAdjustType adlar;
	ADC_InterruptType interrupt;
	ADC_AutoTriggerType auto_trigger;
} ADC_ConfigType;

/**********************************************************************************************************/

/*******************************************Functions Prototypes*******************************************/

void ADC_init(const ADC_ConfigType *Config_Ptr);
uint16 ADC_readChannel_polling(uint8 channel_num);
void ADC_readChannel_interrupt(uint8 channel_num);

/**********************************************************************************************************/

#endif /* MY_ADC_H_ */
