/**
  ******************************************************************************
  * @file           : PWM_Generating.c
  * @brief          : PWM Generater
  ******************************************************************************
  ******************************************************************************
  */

/* Includes-------------------------------------------------------------------*/
#include "PWM_Generating.h"

/* Private variables ---------------------------------------------------------*/

/* Private function -----------------------------------------------*/
void PWMGen (volatile int32_t *value, TIM_HandleTypeDef *timer, uint32_t timchannel, GPIO_TypeDef *gpioport, uint32_t gpiopin)
{
	if (*value<0)
		  {
			  HAL_GPIO_WritePin(gpioport, gpiopin, GPIO_PIN_SET);
			  int32_t duty = - *value + PWMOffset;
		  	  __HAL_TIM_SET_COMPARE(timer, timchannel, duty);
		  }
		  else
		  {
			  HAL_GPIO_WritePin(gpioport, gpiopin, GPIO_PIN_RESET);
			  int32_t duty =  *value + PWMOffset;
		  	  __HAL_TIM_SET_COMPARE(timer, timchannel, duty);
		  }
}

void PWMGen2 (volatile int32_t *value, TIM_HandleTypeDef *timer, uint32_t timchannel, GPIO_TypeDef *gpioport, uint32_t gpiopin, GPIO_TypeDef *gpioport2, uint32_t gpiopin2)
{
	if (*value<0)
		  {
			  HAL_GPIO_WritePin(gpioport, gpiopin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(gpioport2, gpiopin2, GPIO_PIN_RESET);
			  int32_t duty = - *value + PWMOffset;
		  	  __HAL_TIM_SET_COMPARE(timer, timchannel, duty);
		  }
		  else
		  {
			  HAL_GPIO_WritePin(gpioport, gpiopin, GPIO_PIN_RESET);
			  HAL_GPIO_WritePin(gpioport2, gpiopin2, GPIO_PIN_SET);
			  int32_t duty =  *value + PWMOffset;
		  	  __HAL_TIM_SET_COMPARE(timer, timchannel, duty);
		  }
}

void PWMGen3 (volatile int32_t *value, TIM_HandleTypeDef *timer, uint32_t timchannel, GPIO_TypeDef *gpioport, uint32_t gpiopin)
{
	if (*value<0)
		  {
			  HAL_GPIO_WritePin(gpioport, gpiopin, GPIO_PIN_SET);
			  int32_t duty = - *value + PWMOffset;
		  	  __HAL_TIM_SET_COMPARE(timer, timchannel, 99 - duty);
		  }
		  else
		  {
			  HAL_GPIO_WritePin(gpioport, gpiopin, GPIO_PIN_RESET);
			  int32_t duty =  *value + PWMOffset;
		  	  __HAL_TIM_SET_COMPARE(timer, timchannel, duty);
		  }
}
