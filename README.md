<h1 align="center">
🌡️ Fan Controller System 🌡️
</h1>

This project implements a temperature-controlled fan system using an ATmega32 microcontroller (1MHz). It monitors temperature with an LM35 sensor, displays the temperature on an LCD, and controls fan speed using PWM based on predefined temperature thresholds.

## 🛠️ Project Overview

The system is built around an ATmega32 microcontroller and includes:

- **LM35 Temperature Sensor** for accurate temperature measurement.
- **LCD Display** to show real-time temperature readings.
- **DC Motor** controlled via PWM to adjust fan speed according to temperature.
- **Timer0** for generating PWM signals.

### 🌟 Features

- **Temperature Monitoring**: Continuously monitors the environment using the LM35 sensor.
- **Dynamic Fan Control**: Adjusts fan speed through PWM based on temperature thresholds.
- **User Interface**: Displays the current temperature on an LCD.

### 🔧 Components and Drivers

- **Microcontroller**: ATmega32 (1MHz)
- **Components**:
  - LM35 Temperature Sensor
  - Timer0 (PWM generation)
  - DC Motor (for fan speed control)
  - LCD Display
- **Drivers**:
  - **ADC Driver**: Reads temperature data from the LM35 sensor.
  - **Temperature Sensor Driver**: Processes data from the LM35 sensor, converting it to usable temperature values.
  - **PWM Driver**: Generates PWM signals to control DC motor speed based on temperature input.
  - **GPIO Driver**: Manages input/output for the motor and LCD control.
  - **LCD Driver**: Displays temperature readings.

## 🏗️ System Architecture

The system uses a layered architecture, integrating various components and drivers to control fan speed based on real-time temperature data:

1. **Temperature Monitoring**:
   - The LM35 sensor captures temperature data, which is processed by the ADC and the temperature sensor driver. The result is displayed on the LCD.

2. **Fan Speed Control**:
   - Timer0 generates PWM signals through the PWM driver to control the DC motor, adjusting fan speed according to the detected temperature.

3. **Display**:
   - The LCD, controlled by the LCD driver, provides real-time feedback by showing the current temperature.
  
## 💻 Simulation of the Fan Controller System
![image](https://github.com/user-attachments/assets/fcb6fda3-af8f-4f4a-9f15-ae6a3760f778)
![image](https://github.com/user-attachments/assets/bdd9495a-2225-4d0f-993b-08e4f28087b0)



