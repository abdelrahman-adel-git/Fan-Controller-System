/*
 ============================================================================
 Name        : Fan_Controller_System.h
 Author      : Abd-Elrahman Adel
 Description : Fan controller System Project
 Date        : 14/10/2023
 ============================================================================
 */

#ifndef FAN_CONTROLLER_SYSTEM_H_
#define FAN_CONTROLLER_SYSTEM_H_
#define displayFanState(state)\
{\
	switch (state)\
	{\
	case FAN_OFF:\
		LCD_displayStringRowColumn(0, 4, "FAN is OFF");\
		break;\
	case FAN_ON:\
		LCD_displayStringRowColumn(0, 4, "FAN is ON ");\
		break;\
	}\
}

#define displayTemperature(temp)\
{\
	LCD_moveCursor(1, 11);\
	if (temp >= 100)\
	{\
		LCD_intgerToString(temp);\
	}\
	else\
	{\
		LCD_intgerToString(temp);\
		LCD_displayCharacter(' ');\
	}\
}

#define adjustFanSpeedByTemperature(temp)\
{\
	if (temp >= 120)\
	{\
		DcMotor_Rotate(CW, 100);\
		currentFanState = FAN_ON;\
	}\
	else if (temp >= 90)\
	{\
		DcMotor_Rotate(CW, 75);\
		currentFanState = FAN_ON;\
	}\
	else if (temp >= 60)\
	{\
		DcMotor_Rotate(CW, 50);\
		currentFanState = FAN_ON;\
	}\
	else if (temp >= 30)\
	{\
		DcMotor_Rotate(CW, 25);\
		currentFanState = FAN_ON;\
	}\
	else if (temp < 30)\
	{\
		DcMotor_Rotate(STOP, 0);\
		currentFanState = FAN_OFF;\
	}\
}

#endif /* FAN_CONTROLLER_SYSTEM_H_ */
