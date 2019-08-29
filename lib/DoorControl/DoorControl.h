
#ifndef _DOORCONTROL_H_
#define _DOORCONTROL_H_

void Get_Large_Door_State();
/* function  that retreives the large garage door state */

void Set_Sirene_State();
/*function that sets the sirene state, and returns if there is error*/

void Get_Card_Reader_State();
/*function that retreives card reader data*/

void Get_Small_Door_State();
/*function that retreives small door sensor state*/

void Get_Door_Lock_State();
/*funtcion that retreives door lock sensor state*/

#endif