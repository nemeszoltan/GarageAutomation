


/**
 * @brief Light sensor states
 *
 * Light sensor states enumeration, with all possible and handled states
 */
typedef enum light_sensor_states{
    LIGHT_LEVEL,                    /**< actual value of the light sensor returned data */
    LIGHT_SENSOR_SC,                /**< light sensor output short-circuit */
    LIGHT_SNSOR_OL                  /**< light sensor open-load */
}LIGHT_SENSOR_STATES;

/**
 * @brief Lighting state
 *
 * The state of the actual lighting (lights on/off), if lights stay on for
 * to long (preset time) timeout is generated
 */
typedef enum lighting_state{
    LIGHT_ON,                       /**< lighting is turned on */
    LIGHT_OFF,                      /**< lighting is turned off */
    TIMEOUT                         /**< lighting is not turned off after a required period of time */
}LIGHTING_STATE;

/**
 * @brief Motion sensor state
 *
 * State of the motion sensor, sensor state is normal closed, short-circuit and 
 * open load also should be monitored
 */
typedef enum motion_sensor_state{
    MOTION,                         /**< motion detected */
    MOTION_SENSOR_SC,               /**< motion sensor output short-circuit */
    MOTION_SENOR_OL                 /**< motion sensor output connection broken (open-load) */
}MOTION_SENSOR_STATE;


