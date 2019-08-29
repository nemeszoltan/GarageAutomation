

#ifndef _TIMEKEEPER_H_
#define _TIMEKEEPER_H_


/**
* @brief Function for setting time to RTC circuit
*
* Function for setting time to RTC circuit, expected input parameters 
* year, month, day, hour, minute. Second not required as start value 
* default vill be zero.
*
*/
void Set_Time();

/**
* @brief Function for retrieving time from RTC circuit
*
* Function for retrieving time from RTC circuit, expected output parameters 
* year, month, day, hour, minute, second. 
*
*/
void Get_Time();


#endif