/**
  ******************************************************************************
  * @file           : PWM_Generating.h
  * @brief          : PWM Generater
  ******************************************************************************
  ******************************************************************************
  */

/* Includes-------------------------------------------------------------------*/
#include "main.h"

/* Private define ------------------------------------------------------------*/
#define PWMOffset 							4

/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/
void PWMGen (volatile int32_t *value, TIM_HandleTypeDef *timer, uint32_t timchannel, GPIO_TypeDef *gpioport, uint32_t gpiopin);
void PWMGen2 (volatile int32_t *value, TIM_HandleTypeDef *timer, uint32_t timchannel, GPIO_TypeDef *gpioport, uint32_t gpiopin, GPIO_TypeDef *gpioport2, uint32_t gpiopin2);
void PWMGen3 (volatile int32_t *value, TIM_HandleTypeDef *timer, uint32_t timchannel, GPIO_TypeDef *gpioport, uint32_t gpiopin);
