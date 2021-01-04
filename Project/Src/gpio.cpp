/*
 * gpio.cpp
 *
 *  Created on: Jan 4, 2021
 *      Author: Florian
 */

#include "gpio.h"

#include <stm32f0xx_ll_bus.h>
#include <stm32f0xx_ll_gpio.h>


namespace vanguard
{

void gpio_init()
{
	LL_GPIO_InitTypeDef GPIO_InitStruct;

	/* GPIO Ports Clock Enable */
	LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOF);
	LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOA);
	LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOB);

	LL_GPIO_ResetOutputPin(Unknown_2_GPIO_Port, Unknown_2_Pin);

	LL_GPIO_ResetOutputPin(Unknown_3_GPIO_Port, Unknown_3_Pin);

	LL_GPIO_ResetOutputPin(Unknown_4_GPIO_Port, Unknown_4_Pin);

	LL_GPIO_ResetOutputPin(Unknown_1_GPIO_Port, Unknown_1_Pin);

	LL_GPIO_ResetOutputPin(ESC_VCC_GPIO_Port, ESC_VCC_Pin);

	LL_GPIO_ResetOutputPin(Not_Connected_1_GPIO_Port, Not_Connected_1_Pin);

	LL_GPIO_ResetOutputPin(LED_Red_GPIO_Port, LED_Red_Pin);

	LL_GPIO_ResetOutputPin(Unused_Plug_GPIO_Port, Unused_Plug_Pin);

	LL_GPIO_ResetOutputPin(Not_Connected_2_GPIO_Port, Not_Connected_2_Pin);

	LL_GPIO_ResetOutputPin(RF_CSn_GPIO_Port, RF_CSn_Pin);

	LL_GPIO_ResetOutputPin(Test_Pad_GPIO_Port, Test_Pad_Pin);

	LL_GPIO_ResetOutputPin(Not_Connected_3_GPIO_Port, Not_Connected_3_Pin);

	LL_GPIO_ResetOutputPin(Not_Connected_4_GPIO_Port, Not_Connected_4_Pin);

	GPIO_InitStruct.Pin = Unknown_2_Pin;
	GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
	GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_LOW;
	GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_OPENDRAIN;
	GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
	LL_GPIO_Init(Unknown_2_GPIO_Port, &GPIO_InitStruct);

	GPIO_InitStruct.Pin = Unknown_3_Pin;
	GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
	GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_LOW;
	GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_OPENDRAIN;
	GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
	LL_GPIO_Init(Unknown_3_GPIO_Port, &GPIO_InitStruct);

	GPIO_InitStruct.Pin = Unknown_4_Pin;
	GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
	GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_LOW;
	GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_OPENDRAIN;
	GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
	LL_GPIO_Init(Unknown_4_GPIO_Port, &GPIO_InitStruct);

	GPIO_InitStruct.Pin = Unknown_1_Pin;
	GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
	GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_LOW;
	GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_OPENDRAIN;
	GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
	LL_GPIO_Init(Unknown_1_GPIO_Port, &GPIO_InitStruct);

	GPIO_InitStruct.Pin = ESC_VCC_Pin;
	GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
	GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_LOW;
	GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_OPENDRAIN;
	GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
	LL_GPIO_Init(ESC_VCC_GPIO_Port, &GPIO_InitStruct);

	GPIO_InitStruct.Pin = Not_Connected_1_Pin;
	GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
	GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_LOW;
	GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_OPENDRAIN;
	GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
	LL_GPIO_Init(Not_Connected_1_GPIO_Port, &GPIO_InitStruct);

	GPIO_InitStruct.Pin = LED_Red_Pin;
	GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
	GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_LOW;
	GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
	GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
	LL_GPIO_Init(LED_Red_GPIO_Port, &GPIO_InitStruct);

	GPIO_InitStruct.Pin = Unused_Plug_Pin;
	GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
	GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_LOW;
	GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_OPENDRAIN;
	GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
	LL_GPIO_Init(Unused_Plug_GPIO_Port, &GPIO_InitStruct);

	GPIO_InitStruct.Pin = Not_Connected_2_Pin;
	GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
	GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_LOW;
	GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_OPENDRAIN;
	GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
	LL_GPIO_Init(Not_Connected_2_GPIO_Port, &GPIO_InitStruct);

	GPIO_InitStruct.Pin = RF_CSn_Pin;
	GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
	GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_LOW;
	GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
	GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
	LL_GPIO_Init(RF_CSn_GPIO_Port, &GPIO_InitStruct);

	GPIO_InitStruct.Pin = Test_Pad_Pin;
	GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
	GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_LOW;
	GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_OPENDRAIN;
	GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
	LL_GPIO_Init(Test_Pad_GPIO_Port, &GPIO_InitStruct);

	GPIO_InitStruct.Pin = Not_Connected_3_Pin;
	GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
	GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_LOW;
	GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_OPENDRAIN;
	GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
	LL_GPIO_Init(Not_Connected_3_GPIO_Port, &GPIO_InitStruct);

	GPIO_InitStruct.Pin = Not_Connected_4_Pin;
	GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
	GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_LOW;
	GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_OPENDRAIN;
	GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
	LL_GPIO_Init(Not_Connected_4_GPIO_Port, &GPIO_InitStruct);

	GPIO_InitStruct.Pin = RF_GDO0_Pin;
	GPIO_InitStruct.Mode = LL_GPIO_MODE_INPUT;
	GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
	LL_GPIO_Init(RF_GDO0_GPIO_Port, &GPIO_InitStruct);

	GPIO_InitStruct.Pin = Button_Pin;
	GPIO_InitStruct.Mode = LL_GPIO_MODE_INPUT;
	GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
	LL_GPIO_Init(Button_GPIO_Port, &GPIO_InitStruct);
}

} // namespace vanguard
