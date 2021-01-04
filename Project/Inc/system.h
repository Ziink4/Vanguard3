/*
 * system.h
 *
 *  Created on: Jan 4, 2021
 *      Author: Florian
 */

#pragma once

/* Includes ------------------------------------------------------------------*/
//#include "stm32f0xx_ll_dma.h"
//#include "stm32f0xx_ll_i2c.h"
//#include "stm32f0xx_ll_crs.h"
//#include "stm32f0xx_ll_rcc.h"
//#include "stm32f0xx_ll_bus.h"
//#include "stm32f0xx_ll_system.h"
//#include "stm32f0xx_ll_exti.h"
//#include "stm32f0xx_ll_cortex.h"
//#include "stm32f0xx_ll_utils.h"
//#include "stm32f0xx_ll_pwr.h"
//#include "stm32f0xx_ll_spi.h"
//#include "stm32f0xx_ll_tim.h"
//#include "stm32f0xx_ll_gpio.h"

#if defined(USE_FULL_ASSERT)
#include "assert.h"
#endif /* USE_FULL_ASSERT */

/* Private defines -----------------------------------------------------------*/
#define XTAL_2_Pin LL_GPIO_PIN_0
#define XTAL_2_GPIO_Port GPIOF
#define XTAL_1_Pin LL_GPIO_PIN_1
#define XTAL_1_GPIO_Port GPIOF
#define Unknown_2_Pin LL_GPIO_PIN_0
#define Unknown_2_GPIO_Port GPIOA
#define Unknown_3_Pin LL_GPIO_PIN_1
#define Unknown_3_GPIO_Port GPIOA
#define Unknown_4_Pin LL_GPIO_PIN_2
#define Unknown_4_GPIO_Port GPIOA
#define Unknown_1_Pin LL_GPIO_PIN_3
#define Unknown_1_GPIO_Port GPIOA
#define ESC_VCC_Pin LL_GPIO_PIN_4
#define ESC_VCC_GPIO_Port GPIOA
#define Not_Connected_1_Pin LL_GPIO_PIN_5
#define Not_Connected_1_GPIO_Port GPIOA
#define LED_Red_Pin LL_GPIO_PIN_6
#define LED_Red_GPIO_Port GPIOA
#define LED_Bue_Pin LL_GPIO_PIN_7
#define LED_Bue_GPIO_Port GPIOA
#define Tail_Motor_Pin LL_GPIO_PIN_0
#define Tail_Motor_GPIO_Port GPIOB
#define Unused_Plug_Pin LL_GPIO_PIN_1
#define Unused_Plug_GPIO_Port GPIOB
#define Not_Connected_2_Pin LL_GPIO_PIN_2
#define Not_Connected_2_GPIO_Port GPIOB
#define RF_CSn_Pin LL_GPIO_PIN_8
#define RF_CSn_GPIO_Port GPIOA
#define Test_Pad_Pin LL_GPIO_PIN_9
#define Test_Pad_GPIO_Port GPIOA
#define Not_Connected_3_Pin LL_GPIO_PIN_10
#define Not_Connected_3_GPIO_Port GPIOA
#define Not_Connected_4_Pin LL_GPIO_PIN_11
#define Not_Connected_4_GPIO_Port GPIOA
#define RF_GDO0_Pin LL_GPIO_PIN_12
#define RF_GDO0_GPIO_Port GPIOA
#define Debug_Data_Pin LL_GPIO_PIN_13
#define Debug_Data_GPIO_Port GPIOA
#define Debug_Clock_Pin LL_GPIO_PIN_14
#define Debug_Clock_GPIO_Port GPIOA
#define RF_GDO2_Pin LL_GPIO_PIN_15
#define RF_GDO2_GPIO_Port GPIOA
#define RF_SO_GDO1_Pin LL_GPIO_PIN_3
#define RF_SO_GDO1_GPIO_Port GPIOB
#define RF_SCLK_Pin LL_GPIO_PIN_4
#define RF_SCLK_GPIO_Port GPIOB
#define RF_SI_Pin LL_GPIO_PIN_5
#define RF_SI_GPIO_Port GPIOB
#define Gyro_Clock_Pin LL_GPIO_PIN_6
#define Gyro_Clock_GPIO_Port GPIOB
#define Gyro_Data_Pin LL_GPIO_PIN_7
#define Gyro_Data_GPIO_Port GPIOB
#define Button_Pin LL_GPIO_PIN_8
#define Button_GPIO_Port GPIOB
#ifndef NVIC_PRIORITYGROUP_0
#define NVIC_PRIORITYGROUP_0         ((uint32_t)0x00000007) /*!< 0 bit  for pre-emption priority,
                                                                 4 bits for subpriority */
#define NVIC_PRIORITYGROUP_1         ((uint32_t)0x00000006) /*!< 1 bit  for pre-emption priority,
                                                                 3 bits for subpriority */
#define NVIC_PRIORITYGROUP_2         ((uint32_t)0x00000005) /*!< 2 bits for pre-emption priority,
                                                                 2 bits for subpriority */
#define NVIC_PRIORITYGROUP_3         ((uint32_t)0x00000004) /*!< 3 bits for pre-emption priority,
                                                                 1 bit  for subpriority */
#define NVIC_PRIORITYGROUP_4         ((uint32_t)0x00000003) /*!< 4 bits for pre-emption priority,
                                                                 0 bit  for subpriority */
#endif
