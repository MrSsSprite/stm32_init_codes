#ifndef __DELAY_H
#define __DELAY_H

/*----------------------------- Public Includes ------------------------------*/
#include "stdint.h"
/*--------------------------- Public Includes END ----------------------------*/

/*------------------------------ Public Macros -------------------------------*/
/**
 * @brief Busy Wait
 * @param xms: Time length for which the MCU waits, in ms (millisecond)
 *  @range 1 - 16777
 * @retval None
 */
#define Delay_ms(xms) Delay_us(xms * 1000u)
/**
 * @brief Busy Wait
 * @param xs: Time length for which the MCU waits, in s (second)
 *  @range 1 - 16
 * @retval None
 */
#define Delay_s(xs) Delay_ms(xs * 1000u)
/*---------------------------- Public Macros END -----------------------------*/

/*--------------------------- Function Prototypes ----------------------------*/
void Delay_us(uint32_t xus);
/*------------------------- Function Prototypes END --------------------------*/

/*----------------------- Public Variable Declarations -----------------------*/
extern uint32_t SYSCLK;
/*--------------------- Public Variable Declarations END ---------------------*/

#endif
