



/**
 * @brief Encoder button states
 *
 * Description of all handeld encoder button states
 */
typedef enum en_encoder_button_state{
    ENCODER_BUTTON_OPEN,                
    ENCODER_BUTTON_CLOSED,              /***/
    ENCODER_BUTTON_PRESSED,             /***/
    ENCODER_BUTTON_HELD,                /***/
    ENCODER_BUTTON_RELEASED,            /***/
    ENCODER_BUTTON_CLICKED,             /***/
    ENCODER_BUTTON_DOUBLECLIKED,        /***/
    ENCODER_BUTTON_SC,                  /***///short corcuit
    ENCODER_BUTTON_OL                   /***///open load
}EN_ENCODER_BUTTON_STATE;

/*typedef enum lcd_state{

}LCD_STATE;*/