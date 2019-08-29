

typedef enum largeDoor_sensor_state{
    LARGE_DOOR_STATE,                   //actual value of the door sensor returned data
    LARGE_DOOR_SENSOR_SC,               //door sensor output short circuit
    LAEGE_DOOR_SNSOR_OL                 //light sensor open load
}LARGE_DOOR_SENSOR_STATE;

typedef enum sirene_state{
    SIRENE_ON,                          //sirne on
    SIRENE_OFF,                         //sirene off
    SIRENE_SC,                          //sirene command line short circuit 
    SIRENE_OL                           //sirene command line open load
}SIRENE_STATE;

typedef enum card_reader_state{
    VALID_ID,                           
    INVALID_ID,
    CARD_READER_SC,                     //card reader output short circuit
    CARD_READER_OL                      //card reader output open load
}CARD_READER_STATE;

typedef enum smallDoor_sensor_state{
    SMALL_DOOR_STATE,                    //actual value of the door sensor returned data
    SMALL_DOOR_SENSOR_SC,                //door sensor output short circuit
    SMALL_DOOR_SNSOR_OL                  //light sensor open load
}small_DOOR_SENSOR_STATE;

typedef enum door_lock_state{
    DOOR_LOCKED,                        
    DOOR_UNLOCKED,
    DOOR_LOCK_SENS_SC,                  //door lock sensor short circuit
    DOOR_LOCK_SENS_OL                   //door lock sensor open load
}DOOR_LOCK_STATE;