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

/**
 * @addtogroup Peripheral_memory_map
 * @{
 */
#define PERIPH_ADDRBASE 0x40000000UL

#define APB1_ADDRBASE   PERIPH_ADDRBASE
#define APB2_ADDRBASE   (PERIPH_ADDRBASE + 0x10000UL)
#define AHB_ADDRBASE    (PERIPH_ADDRBASE + 0x20000UL)

/* on APB1 */
#define TIM2_BASE       (APB1_ADDRBASE)
#define TIM3_BASE       (APB1_ADDRBASE + 0x400UL)
#define TIM4_BASE       (APB1_ADDRBASE + 0x800UL)
#define TIM5_BASE       (APB1_ADDRBASE + 0xC00UL)
#define TIM6_BASE       (APB1_ADDRBASE + 0x1000UL)
#define TIM7_BASE       (APB1_ADDRBASE + 0x1400UL)
#define TIM12_BASE      (APB1_ADDRBASE + 0x1800UL)
#define TIM13_BASE      (APB1_ADDRBASE + 0x1C00UL)
#define TIM14_BASE      (APB1_ADDRBASE + 0x2000UL)
#define RTC_BASE        (APB1_ADDRBASE + 0x2800UL)
#define WWDG_BASE       (APB1_ADDRBASE + 0x2C00UL)
#define IWDG_BASE       (APB1_ADDRBASE + 0x3000UL)
#define SPI2_BASE       (APB1_ADDRBASE + 0x3800UL)
#define SPI3_BASE       (APB1_ADDRBASE + 0x3C00UL)
#define USART2_BASE     (APB1_ADDRBASE + 0x4400UL)
#define USART3_BASE     (APB1_ADDRBASE + 0x4800UL)
#define UART4_BASE      (APB1_ADDRBASE + 0x4C00UL)
#define USART4_BASE     UART4_BASE
#define UART5_BASE      (APB1_ADDRBASE + 0x5000UL)
#define I2C1_BASE       (APB1_ADDRBASE + 0x5400UL)
#define I2C2_BASE       (APB1_ADDRBASE + 0x5800UL)
#define CAN1_BASE       (APB1_ADDRBASE + 0x6400UL)
#define CAN2_BASE       (APB1_ADDRBASE + 0x6800UL)
#define BKP_BASE        (APB1_ADDRBASE + 0x6C00UL)
#define PWR_BASE        (APB1_ADDRBASE + 0x7000UL)
#define DAC_BASE        (APB1_ADDRBASE + 0x7400UL)

/* on APB2 */
#define AFIO_BASE       (APB2_ADDRBASE)
#define EXTI_BASE       (APB2_ADDRBASE + 0x400UL)
#define GPIOA_BASE      (APB2_ADDRBASE + 0x800UL)
#define GPIOB_BASE      (APB2_ADDRBASE + 0xC00UL)
#define GPIOC_BASE      (APB2_ADDRBASE + 0x1000UL)
#define GPIOD_BASE      (APB2_ADDRBASE + 0x1400UL)
#define GPIOE_BASE      (APB2_ADDRBASE + 0x1800UL)
#define GPIOF_BASE      (APB2_ADDRBASE + 0x1C00UL)
#define GPIOG_BASE      (APB2_ADDRBASE + 0x2000UL)
#define ADC1_BASE       (APB2_ADDRBASE + 0x2400UL)
#define ADC2_BASE       (APB2_ADDRBASE + 0x2800UL)
#define TIM1_BASE       (APB2_ADDRBASE + 0x2C00UL)
#define SPI1_BASE       (APB2_ADDRBASE + 0x3000UL)
#define TIM8_BASE       (APB2_ADDRBASE + 0x3400UL)
#define USART1_BASE     (APB2_ADDRBASE + 0x3800UL)
#define ADC3_BASE       (APB2_ADDRBASE + 0x3C00UL)
#define TIM9_BASE       (APB2_ADDRBASE + 0x4C00UL)
#define TIM10_BASE      (APB2_ADDRBASE + 0x5000UL)
#define TIM11_BASE      (APB2_ADDRBASE + 0x5400UL)

/* on AHB */
#define DMA1_BASE       (AHB_ADDRBASE)
#define DMA2_BASE       (AHB_ADDRBASE + 0x400UL)
#define RCC_BASE        (AHB_ADDRBASE + 0x1000UL)
#define CRC_BASE        (AHB_ADDRBASE + 0x3000UL)
/**
 * @}
 */

/**
 * @addtogroup Peripheral_registers_declaration
 * @{
 */
#define GPIOA           ((GPIO_Reg*)GPIOA_BASE)
#define GPIOB           ((GPIO_Reg*)GPIOB_BASE)
#define GPIOC           ((GPIO_Reg*)GPIOC_BASE)
#define GPIOD           ((GPIO_Reg*)GPIOD_BASE)
#define GPIOE           ((GPIO_Reg*)GPIOE_BASE)
#define GPIOF           ((GPIO_Reg*)GPIOF_BASE)
#define GPIOG           ((GPIO_Reg*)GPIOG_BASE)

#define RCC             ((RCC_Reg*)RCC_BASE)
/**
 * @}
 */
/*---------------------------- Public Structs END ----------------------------*/

#endif
