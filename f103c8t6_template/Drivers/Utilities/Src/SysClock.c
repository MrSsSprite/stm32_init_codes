/*----------------------------- Private Includes -----------------------------*/
#include "SysClock.h"
#include "stdint.h"
#include "register.h"
/*--------------------------- Private Includes END ---------------------------*/

/*---------------------------- Private Variables -----------------------------*/
uint32_t SYSCLK = 8000000u;
/*-------------------------- Private Variables END ---------------------------*/

/*---------------------------- Exported Functions ----------------------------*/
/**
 * @brief Busy Wait
 * @param xus: Time length for which the MCU waits, in us (microsecond)
 *  @range 1 - 0xFFFFFF (i.e., 16777216)
 * @retval None
 */
void Delay_us(uint32_t xus)
{
   /* Set Reload Value */
   SysTick->LOAD = SYSCLK / 1000000u * xus;
   /* Enforce Reload */
   SysTick->VAL = 0u;
   /* Enable Clock */
   SysTick->CTRL |= 0x1u;
   /* Buzy Wait for counted to 0 */
   while (!(SysTick->CTRL & 0x1u << 16)) ;
   /* Disable Clock */
   SysTick->CTRL &= ~0x1u;
}
/*-------------------------- Exported Functions END --------------------------*/
