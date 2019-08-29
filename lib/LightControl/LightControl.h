

#ifndef LIGHTCONTROL_H_
#define LIGHTCONTROL_H_

/**
* @brief Function to read light level
*
*  Function that retreives ADC value, and writes this data to "EN_LIGHT_SENSOR_STATE"
*/
void Get_Light_Sensor_State();


/**
* @brief Function to get lighting state
*
* Funciton to get the state of the lighting, if is ON/OFF, and writes 
* writes this data to "EN_LIGHTING_STATE"
*/
void Get_Lighting_State();


/**
* @brief Function to get motion sensor state
*
* Function to get the state of the motion sensor, writes this data to 
* "EN_MOTION_SENSOR_STATE"
*/
void Get_Motion_Sensor_State();

#endif