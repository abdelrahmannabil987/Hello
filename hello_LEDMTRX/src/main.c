/*
 * main.c
 *
 *  Created on: Mar 20, 2025
 *      Author: abdelrahman
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_interface.h"
#include "RCC_interface.h"
#include "STICK_interface.h"

#include "LEDMTRX_interface.h"

u8 DataArray[8] = {0, 0, 0, 191, 191, 0, 0, 0};
void main (void)
{
	/*RCC Init and Enables*/
	RCC_voidInitSystemClock();
	RCC_voidEnableClock(RCC_APB2,2);//GPIOA
	RCC_voidEnableClock(RCC_APB2,3);//GPIOB

	while(1);

	/*Init SysTick*/
	MSTICK_voidInit();

	/*Init LED MATRIX*/
	HLEDMTRX_voidInit();

	HLEDMTRX_voidDisplay(DataArray);
}
