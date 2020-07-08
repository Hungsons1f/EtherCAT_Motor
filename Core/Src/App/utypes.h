#ifndef __UTYPES_H__
#define __UTYPES_H__

#include "cc.h"

/* Object dictionary storage */

typedef struct
{
   /* Inputs */

   struct
   {
      uint8_t LED_RED;
      uint8_t LED_BLUE;
      uint8_t LED_GREEN;
   } LED;
   uint8_t LED_VAL;
   uint8_t PHY_BUTTON;

   /* Outputs */

   struct
   {
      uint8_t BUTTON_1;
      uint8_t BUTTON_2;
   } BUTTON;
   uint8_t BUTTON_VAL;
   uint8_t MotorStatus;
   float pwm;

   /* Parameters */

   struct
   {
      char Multiplier[2];
      char Hello[2];
   } Parameters;

} _Objects;

extern _Objects Obj;

#endif /* __UTYPES_H__ */
