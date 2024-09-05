################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Fan_Controller_System.c \
../my_adc.c \
../my_dcMotor.c \
../my_gpio.c \
../my_lcd.c \
../my_lm35.c \
../my_pwmTimer0.c 

OBJS += \
./Fan_Controller_System.o \
./my_adc.o \
./my_dcMotor.o \
./my_gpio.o \
./my_lcd.o \
./my_lm35.o \
./my_pwmTimer0.o 

C_DEPS += \
./Fan_Controller_System.d \
./my_adc.d \
./my_dcMotor.d \
./my_gpio.d \
./my_lcd.d \
./my_lm35.d \
./my_pwmTimer0.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


