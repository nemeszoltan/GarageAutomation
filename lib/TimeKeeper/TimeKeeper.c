

#include <stdint.h>
/**
 * @brief Time related data
 *
 * Time related states, wich can returned from the time module
 */

struct time
{
     uint16_t   year_u16:12;        /**< Variable containig the year data*/
     uint8_t    month_u8:4;         /**< Variable containig the month data*/
     uint8_t    day_u8:5;           /**< Variable containig the day data*/
     uint8_t    hour_u8:5;          /**< Variable containig the hour data*/
     uint8_t    minute_u8:6;        /**< Variable containig the minute data*/
     uint8_t    second_u8:6;        /**< Variable containig the second */ 
     bool       set_time;           /**< Flag wich has to be set if data is writen to variables by the user, data should not be read by aplication until this is set */
     bool       invalid;            /**< Flag the is set if invalid data is received from RTC control module*/
};
