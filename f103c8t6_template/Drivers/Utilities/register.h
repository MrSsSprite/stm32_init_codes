#ifndef __REGISTER_H
#define __REGISTER_H

/*----------------------------- Public Includes ------------------------------*/
#include <stdint.h>
/*--------------------------- Public Includes END ----------------------------*/

/*------------------------------ Public Defines ------------------------------*/
#define __RW   volatile
#define __R    const volatile
#define __W    volatile
/*---------------------------- Public Defines END ----------------------------*/

/*------------------------------ Public Structs ------------------------------*/
/**
 * @addtogroup Peripheral_registers_structures
 * @{
 */
/**
 * @brief Reset and Clock Control
 */
typedef struct
{
   __RW uint32_t CR;
   __RW uint32_t CFGR;
   __RW uint32_t CIR;
   __RW uint32_t APB2RSTR;
   __RW uint32_t APB1RSTR;
   __RW uint32_t AHBENR;
   __RW uint32_t APB2ENR;
   __RW uint32_t APB1ENR;
   __RW uint32_t BDCR;
   __RW uint32_t CSR;
   __RW uint32_t AHBSTR;
   __RW uint32_t CFGR2;
} RCC_Reg;
/**
 * @brief General-Purpose I/Os
 */
typedef struct
{
   __RW uint32_t CRL;
   __RW uint32_t CRH;
   __RW uint32_t IDR;
   __RW uint32_t ODR;
   __RW uint32_t BSRR;
   __RW uint32_t BRR;
   __RW uint32_t LCKR;
} GPIO_Reg;
/**
 * @brief Alternate-Function I/Os
 */
typedef struct
{
   __RW uint32_t EVCR;
   __RW uint32_t MAPR;
   __RW uint32_t EXTICR1;
   __RW uint32_t EXTICR2;
   __RW uint32_t EXTICR3;
   __RW uint32_t EXTICR4;
   __RW uint32_t MAPR2;
} AFIO_Reg;
/**
 * @}
 */
/*---------------------------- Public Structs END ----------------------------*/

#endif
