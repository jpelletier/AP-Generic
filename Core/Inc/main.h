/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define PE2_Pin GPIO_PIN_2
#define PE2_GPIO_Port GPIOE
#define PE3_Pin GPIO_PIN_3
#define PE3_GPIO_Port GPIOE
#define PE4_Pin GPIO_PIN_4
#define PE4_GPIO_Port GPIOE
#define PE5_Pin GPIO_PIN_5
#define PE5_GPIO_Port GPIOE
#define PE6_Pin GPIO_PIN_6
#define PE6_GPIO_Port GPIOE
#define PC13_Pin GPIO_PIN_13
#define PC13_GPIO_Port GPIOC
#define PC14_Pin GPIO_PIN_14
#define PC14_GPIO_Port GPIOC
#define PC15_Pin GPIO_PIN_15
#define PC15_GPIO_Port GPIOC
#define PF0_Pin GPIO_PIN_0
#define PF0_GPIO_Port GPIOF
#define PF1_Pin GPIO_PIN_1
#define PF1_GPIO_Port GPIOF
#define PF2_Pin GPIO_PIN_2
#define PF2_GPIO_Port GPIOF
#define PF3_Pin GPIO_PIN_3
#define PF3_GPIO_Port GPIOF
#define PF4_Pin GPIO_PIN_4
#define PF4_GPIO_Port GPIOF
#define PF5_Pin GPIO_PIN_5
#define PF5_GPIO_Port GPIOF
#define PF6_Pin GPIO_PIN_6
#define PF6_GPIO_Port GPIOF
#define PF7_Pin GPIO_PIN_7
#define PF7_GPIO_Port GPIOF
#define PF8_Pin GPIO_PIN_8
#define PF8_GPIO_Port GPIOF
#define PF9_Pin GPIO_PIN_9
#define PF9_GPIO_Port GPIOF
#define PF10_Pin GPIO_PIN_10
#define PF10_GPIO_Port GPIOF
#define PC0_Pin GPIO_PIN_0
#define PC0_GPIO_Port GPIOC
#define PC1_Pin GPIO_PIN_1
#define PC1_GPIO_Port GPIOC
#define PC2_Pin GPIO_PIN_2
#define PC2_GPIO_Port GPIOC
#define PC3_Pin GPIO_PIN_3
#define PC3_GPIO_Port GPIOC
#define TXO2_Pin GPIO_PIN_2
#define TXO2_GPIO_Port GPIOA
#define RXI2_Pin GPIO_PIN_3
#define RXI2_GPIO_Port GPIOA
#define SPI1_NSS_Pin GPIO_PIN_4
#define SPI1_NSS_GPIO_Port GPIOA
#define SPI1_SCK_Pin GPIO_PIN_5
#define SPI1_SCK_GPIO_Port GPIOA
#define SPI1_MIS0_Pin GPIO_PIN_6
#define SPI1_MIS0_GPIO_Port GPIOA
#define SPI1_MOSI_Pin GPIO_PIN_7
#define SPI1_MOSI_GPIO_Port GPIOA
#define PC4_Pin GPIO_PIN_4
#define PC4_GPIO_Port GPIOC
#define PC5_Pin GPIO_PIN_5
#define PC5_GPIO_Port GPIOC
#define PB0_Pin GPIO_PIN_0
#define PB0_GPIO_Port GPIOB
#define PB1_Pin GPIO_PIN_1
#define PB1_GPIO_Port GPIOB
#define PB2_Pin GPIO_PIN_2
#define PB2_GPIO_Port GPIOB
#define PF11_Pin GPIO_PIN_11
#define PF11_GPIO_Port GPIOF
#define PF12_Pin GPIO_PIN_12
#define PF12_GPIO_Port GPIOF
#define PF13_Pin GPIO_PIN_13
#define PF13_GPIO_Port GPIOF
#define PF14_Pin GPIO_PIN_14
#define PF14_GPIO_Port GPIOF
#define PF15_Pin GPIO_PIN_15
#define PF15_GPIO_Port GPIOF
#define PG0_Pin GPIO_PIN_0
#define PG0_GPIO_Port GPIOG
#define PG1_Pin GPIO_PIN_1
#define PG1_GPIO_Port GPIOG
#define PE7_Pin GPIO_PIN_7
#define PE7_GPIO_Port GPIOE
#define PE8_Pin GPIO_PIN_8
#define PE8_GPIO_Port GPIOE
#define PE9_Pin GPIO_PIN_9
#define PE9_GPIO_Port GPIOE
#define PE10_Pin GPIO_PIN_10
#define PE10_GPIO_Port GPIOE
#define PE11_Pin GPIO_PIN_11
#define PE11_GPIO_Port GPIOE
#define PE12_Pin GPIO_PIN_12
#define PE12_GPIO_Port GPIOE
#define PE13_Pin GPIO_PIN_13
#define PE13_GPIO_Port GPIOE
#define PE14_Pin GPIO_PIN_14
#define PE14_GPIO_Port GPIOE
#define PE15_Pin GPIO_PIN_15
#define PE15_GPIO_Port GPIOE
#define PB10_Pin GPIO_PIN_10
#define PB10_GPIO_Port GPIOB
#define PB11_Pin GPIO_PIN_11
#define PB11_GPIO_Port GPIOB
#define PB12_Pin GPIO_PIN_12
#define PB12_GPIO_Port GPIOB
#define PB13_Pin GPIO_PIN_13
#define PB13_GPIO_Port GPIOB
#define PB14_Pin GPIO_PIN_14
#define PB14_GPIO_Port GPIOB
#define PB15_Pin GPIO_PIN_15
#define PB15_GPIO_Port GPIOB
#define PD8_Pin GPIO_PIN_8
#define PD8_GPIO_Port GPIOD
#define PD9_Pin GPIO_PIN_9
#define PD9_GPIO_Port GPIOD
#define PD10_Pin GPIO_PIN_10
#define PD10_GPIO_Port GPIOD
#define PD11_Pin GPIO_PIN_11
#define PD11_GPIO_Port GPIOD
#define PD12_Pin GPIO_PIN_12
#define PD12_GPIO_Port GPIOD
#define PD13_Pin GPIO_PIN_13
#define PD13_GPIO_Port GPIOD
#define PD14_Pin GPIO_PIN_14
#define PD14_GPIO_Port GPIOD
#define PD15_Pin GPIO_PIN_15
#define PD15_GPIO_Port GPIOD
#define PG2_Pin GPIO_PIN_2
#define PG2_GPIO_Port GPIOG
#define PG3_Pin GPIO_PIN_3
#define PG3_GPIO_Port GPIOG
#define PG4_Pin GPIO_PIN_4
#define PG4_GPIO_Port GPIOG
#define PG5_Pin GPIO_PIN_5
#define PG5_GPIO_Port GPIOG
#define PG6_Pin GPIO_PIN_6
#define PG6_GPIO_Port GPIOG
#define PG7_Pin GPIO_PIN_7
#define PG7_GPIO_Port GPIOG
#define PG8_Pin GPIO_PIN_8
#define PG8_GPIO_Port GPIOG
#define PC6_Pin GPIO_PIN_6
#define PC6_GPIO_Port GPIOC
#define PC7_Pin GPIO_PIN_7
#define PC7_GPIO_Port GPIOC
#define PC8_Pin GPIO_PIN_8
#define PC8_GPIO_Port GPIOC
#define PC9_Pin GPIO_PIN_9
#define PC9_GPIO_Port GPIOC
#define TXO1_Pin GPIO_PIN_9
#define TXO1_GPIO_Port GPIOA
#define RXI1_Pin GPIO_PIN_10
#define RXI1_GPIO_Port GPIOA
#define PC10_Pin GPIO_PIN_10
#define PC10_GPIO_Port GPIOC
#define PC11_Pin GPIO_PIN_11
#define PC11_GPIO_Port GPIOC
#define PC12_Pin GPIO_PIN_12
#define PC12_GPIO_Port GPIOC
#define PD0_Pin GPIO_PIN_0
#define PD0_GPIO_Port GPIOD
#define PD1_Pin GPIO_PIN_1
#define PD1_GPIO_Port GPIOD
#define PD2_Pin GPIO_PIN_2
#define PD2_GPIO_Port GPIOD
#define PD3_Pin GPIO_PIN_3
#define PD3_GPIO_Port GPIOD
#define PD4_Pin GPIO_PIN_4
#define PD4_GPIO_Port GPIOD
#define PD5_Pin GPIO_PIN_5
#define PD5_GPIO_Port GPIOD
#define PD6_Pin GPIO_PIN_6
#define PD6_GPIO_Port GPIOD
#define PD7_Pin GPIO_PIN_7
#define PD7_GPIO_Port GPIOD
#define PG9_Pin GPIO_PIN_9
#define PG9_GPIO_Port GPIOG
#define PG10_Pin GPIO_PIN_10
#define PG10_GPIO_Port GPIOG
#define PG11_Pin GPIO_PIN_11
#define PG11_GPIO_Port GPIOG
#define PG12_Pin GPIO_PIN_12
#define PG12_GPIO_Port GPIOG
#define PG13_Pin GPIO_PIN_13
#define PG13_GPIO_Port GPIOG
#define PG14_Pin GPIO_PIN_14
#define PG14_GPIO_Port GPIOG
#define PG15_Pin GPIO_PIN_15
#define PG15_GPIO_Port GPIOG
#define PB3_Pin GPIO_PIN_3
#define PB3_GPIO_Port GPIOB
#define PB4_Pin GPIO_PIN_4
#define PB4_GPIO_Port GPIOB
#define PB5_Pin GPIO_PIN_5
#define PB5_GPIO_Port GPIOB
#define PB6_Pin GPIO_PIN_6
#define PB6_GPIO_Port GPIOB
#define PB7_Pin GPIO_PIN_7
#define PB7_GPIO_Port GPIOB
#define PB8_Pin GPIO_PIN_8
#define PB8_GPIO_Port GPIOB
#define PB9_Pin GPIO_PIN_9
#define PB9_GPIO_Port GPIOB
#define PE0_Pin GPIO_PIN_0
#define PE0_GPIO_Port GPIOE
#define PE1_Pin GPIO_PIN_1
#define PE1_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
