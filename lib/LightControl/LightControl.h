

#ifndef LIGHTCONTROL_H_
#define LIGHTCONTROL_H_

void Get_Light_Sensor_State();
/*function that reads the ADC that controls the light sensor*/

void Get_Lighting_State();
/*function that reads if the lighting is ON/OFF*/

void Get_Motion_Sensor_State();
/*function that reads motion sensor state*/

#endif