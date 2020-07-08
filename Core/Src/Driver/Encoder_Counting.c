/**
  ******************************************************************************
  * @file           : Encoder_Counting.c
  * @brief          : Encoder Capture driver
  ******************************************************************************
  ******************************************************************************
  */

/* Includes-------------------------------------------------------------------*/
#include "Encoder_Counting.h"

/* Private variables ---------------------------------------------------------*/

/* Private function -----------------------------------------------*/
volatile int32_t EncoderCount (TIM_HandleTypeDef *timer)
{
	volatile int32_t count;
	count = __HAL_TIM_GET_COUNTER(timer);
	__HAL_TIM_SET_COUNTER(timer, 0);
	return count;
}

volatile int32_t EncoderPosCount (TIM_HandleTypeDef *timer)
{
	volatile int32_t count;
	count = __HAL_TIM_GET_COUNTER(timer);
	return count;
}

