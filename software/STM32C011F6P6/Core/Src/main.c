/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.c
 * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

#include "ssd1331.h"
#include "bma400.h"
#include "bma400_defs.h"
#include "stdio.h"

//#include "fonts/_images.h"

//#include "fonts/Font_3_Tiny.h"
//#include "fonts/Font_3_PicoPixel.h"
//#include "fonts/Font_3_TomThumb_Extended.h"
//#include "fonts/Font_5_Org.h"
//#include "fonts/Font_8_Sinclair.h"
//#include "fonts/Font_8_Sinclair_Inverted.h"
//#include "fonts/Font_8_Tiny.h"
//#include "fonts/Font_8_Myke.h"
//#include "fonts/Font_8_Default.h"
//#include "fonts/Font_8_Retro.h"
//#include "fonts/Font_9_Mono.h"
//#include "fonts/Font_9_Mono_Bold.h"
//#include "fonts/Font_9_Mono_Bold_Oblique.h"
//#include "fonts/Font_9_Mono_Oblique.h"
//#include "fonts/Font_9_Sans.h"
//#include "fonts/Font_9_Sans_Bold.h"
//#include "fonts/Font_9_Sans_Bold_Oblique.h"
//#include "fonts/Font_9_Sans_Oblique.h"
//#include "fonts/Font_9_Serif.h"
//#include "fonts/Font_9_Serif_Bold.h"
//#include "fonts/Font_9_Serif_Bold_Italic.h"
//#include "fonts/Font_9_Serif_Italic.h"
//#include "fonts/Font_12_Mono.h"
//#include "fonts/Font_12_Mono_Bold.h"
//#include "fonts/Font_12_Mono_Bold_Oblique.h"
//#include "fonts/Font_12_Mono_Oblique.h"
#include "fonts/Font_12_Sans.h"
//#include "fonts/Font_12_Sans_Bold.h"
//#include "fonts/Font_12_Sans_Bold_Oblique.h"
//#include "fonts/Font_12_Sans_Oblique.h"
//#include "fonts/Font_12_Serif.h"
//#include "fonts/Font_12_Serif_Bold.h"
//#include "fonts/Font_12_Serif_Bold_Italic.h"
//#include "fonts/Font_12_Serif_Italic.h"
//#include "fonts/Font_16_Arial.h"
//#include "fonts/Font_16_Arial_Bold.h"
//#include "fonts/Font_16_Arial_Italic.h"
//#include "fonts/Font_16_Default.h"
//#include "fonts/Font_16_FranklinGothic.h"
//#include "fonts/Font_16_Hallfetica.h"
//#include "fonts/Font_16_Nadianne.h"
//#include "fonts/Font_16_Sinclair.h"
//#include "fonts/Font_16_Sinclair_Inverted.h"
//#include "fonts/Font_16_Swiss_Outline.h"
//#include "fonts/Font_16_Matrix_Full.h"
//#include "fonts/Font_16_Matrix_Full_Slash.h"
//#include "fonts/Font_16_Matrix_Num.h"
//#include "fonts/Font_16_Arial_Round.h"
//#include "fonts/Font_16_OCR.h"
//#include "fonts/Font_16_Segment_16_Full.h"
//#include "fonts/Font_16_Grotesk.h"
//#include "fonts/Font_16_Grotesk_Bold.h"
//#include "fonts/Font_16_Retro.h"
//#include "fonts/Font_18_Mono.h"
//#include "fonts/Font_18_Mono_Bold.h"
//#include "fonts/Font_18_Mono_Bold_Oblique.h"
//#include "fonts/Font_18_Mono_Oblique.h"
//#include "fonts/Font_18_Sans.h"
//#include "fonts/Font_18_Sans_Bold.h"
//#include "fonts/Font_18_Sans_Bold_Oblique.h"
//#include "fonts/Font_18_Sans_Oblique.h"
//#include "fonts/Font_18_Serif.h"
//#include "fonts/Font_18_Serif_Bold.h"
//#include "fonts/Font_18_Serif_Bold_Italic.h"
//#include "fonts/Font_18_Serif_Italic.h"
//#include "fonts/Font_24_Matrix_Num.h"
//#include "fonts/Font_24_Inconsola.h"
//#include "fonts/Font_24_Ubuntu.h"
//#include "fonts/Font_24_Ubuntu_Bold.h"
//#include "fonts/Font_24_Segment_16_Full.h"
//#include "fonts/Font_24_Mono.h"
//#include "fonts/Font_24_Mono_Bold.h"
//#include "fonts/Font_24_Mono_Bold_Oblique.h"
//#include "fonts/Font_24_Mono_Oblique.h"
//#include "fonts/Font_24_Grotesk.h"
//#include "fonts/Font_24_Grotesk_Bold.h"
//#include "fonts/Font_24_Sans.h"
//#include "fonts/Font_24_Sans_Bold.h"
//#include "fonts/Font_24_Sans_Bold_Oblique.h"
//#include "fonts/Font_24_Sans_Oblique.h"
//#include "fonts/Font_24_Serif.h"
//#include "fonts/Font_24_Serif_Bold.h"
//#include "fonts/Font_24_Serif_Bold_Italic.h"
//#include "fonts/Font_24_SerifItalic.h"
//#include "fonts/Font_32_Dingbats.h"
//#include "fonts/Font_32_Special.h"
//#include "fonts/Font_32_Calibri_Bold.h"
//#include "fonts/Font_32_Arial_Num_Plus.h"
//#include "fonts/Font_32_Matrix_Num.h"
//#include "fonts/Font_32_Segment_7_Full.h"
//#include "fonts/Font_32_Segment_7_Num_Plus.h"
//#include "fonts/Font_32_Segment_16_Full.h"
//#include "fonts/Font_32_Segment_18_Full.h"
//#include "fonts/Font_32_Grotesk.h"
//#include "fonts/Font_32_Grotesk_Bold.h"
//#include "fonts/Font_40_Segment_16_Full.h"
//#include "fonts/Font_48_Battery.h"
//#include "fonts/Font_48_Segment_16_Num.h"
//#include "fonts/Font_64_Segment_16_Num.h"
//#include "fonts/Font_64_Segment_7_Num.h"

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

I2C_HandleTypeDef hi2c1;

SPI_HandleTypeDef hspi1;

UART_HandleTypeDef huart1;

/* USER CODE BEGIN PV */

// HTC BMA400	-->
short x, y, z;
// <-- HTC BMA400

// HTC Step Counter -->
uint8_t have_step = 0;
uint16_t step_count = 0;
const uint16_t z_step_threshold = 950;
#define DISPLAY_BUF_LEN 32
char display_buffer[DISPLAY_BUF_LEN];
// <-- HTC Step Counter

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_SPI1_Init(void);
static void MX_I2C1_Init(void);
static void MX_USART1_UART_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

// allow printf to serial
#ifdef __GNUC__
/* With GCC, small printf (option LD Linker->Libraries->Small printf
 set to 'Yes') calls __io_putchar() */
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNUC__ */

PUTCHAR_PROTOTYPE {
	HAL_UART_Transmit(&huart1, (unsigned char*) &ch, 1, 100);
	return ch;
}

// HTC BMA400	-->

// <-- HTC BMA400

/* USER CODE END 0 */

/**
 * @brief  The application entry point.
 * @retval int
 */
int main(void) {

	/* USER CODE BEGIN 1 */

	/* USER CODE END 1 */

	/* MCU Configuration--------------------------------------------------------*/

	/* Reset of all peripherals, Initializes the Flash interface and the Systick. */
	HAL_Init();

	/* USER CODE BEGIN Init */

	/* USER CODE END Init */

	/* Configure the system clock */
	SystemClock_Config();

	/* USER CODE BEGIN SysInit */

	/* USER CODE END SysInit */

	/* Initialize all configured peripherals */
	MX_GPIO_Init();
	MX_SPI1_Init();
	MX_I2C1_Init();
	MX_USART1_UART_Init();
	/* USER CODE BEGIN 2 */

//  // HTC Display -->
//
//	SSD1331_Init();
//
//	HAL_Delay(100);
//
//	LCD_Circle(48, 32, 5, 0, 1, BLUE);
//	LCD_Circle(48, 32, 10, 0, 1, YELLOW);
//	LCD_Circle(48, 32, 15, 0, 1, BLUE);
//	LCD_Circle(48, 32, 20, 0, 1, YELLOW);
//	LCD_Circle(48, 32, 25, 0, 1, BLUE);
//	LCD_Circle(48, 32, 30, 0, 1, YELLOW);
//
//	HAL_Delay(1000);
//
//	SSD1331_Frame(0, 0, 95, 63, BLUE, BLACK); HAL_Delay(1);
//
////	SSD1331_IMG(IMG0, 0, 0, 96, 64);
////	HAL_Delay(1000); SSD1331_Frame(0, 0, 95, 63, BLUE, BLACK); HAL_Delay(1);
////
////	SSD1331_IMG(IMG1, 16,0, 64, 64);
////	HAL_Delay(1000); SSD1331_Frame(0, 0, 95, 63, BLUE, BLACK); HAL_Delay(1);
////
////	SSD1331_IMG(IMG3, 32, 16, 32, 32);
////	SSD1331_copyWindow(32, 16, 64, 48, 0, 0);
////	HAL_Delay(1000); SSD1331_Frame(0, 0, 95, 63, BLUE, BLACK); HAL_Delay(1);
////
////	SSD1331_IMG(IMG2, 23, 7, 50,50);
////	SSD1331_setScrolling(Horizontal, 0, 64, 1);
////	SSD1331_enableScrolling(1);
////
////	HAL_Delay(1000); SSD1331_Frame(0, 0, 95, 63, BLUE, BLACK); HAL_Delay(1);
////	SSD1331_enableScrolling(0);
//
//	LCD_Font(5, 25, "SSD1331", _8_Retro, 1, RED);
//	LCD_Font(5, 45, "OLED", _12_Mono, 1, GREEN);
//	//LCD_Font(10, 60, "0123456", _9_Mono, 1, BLUE);
//
//	HAL_Delay(1000);
//
//	SSD1331_setScrolling(Horizontal, 0, 64, 1);
//	SSD1331_enableScrolling(1);
//
//  // <-- HTC Display
// HTC Step Counter Display -->
	SSD1331_Init();

	HAL_Delay(100);
	LCD_Font(5, 20, "Steps:", _12_Sans, 1, GREEN);

	// <-- HTC Step Counter Display

// HTC BMA400 -->
	printf("bma400 init\r\n");
	MPU_Init();

	// <-- HTC BMA400

	/* USER CODE END 2 */

	/* Infinite loop */
	/* USER CODE BEGIN WHILE */
	while (1) {
		/* USER CODE END WHILE */

		/* USER CODE BEGIN 3 */

//	  // HTC LED -->
//	  HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
//	  HAL_Delay(500);
//	  // <-- HTC LED
//		// HTC BMA400	-->
//		MPU_Get_Gyroscope(&x, &y, &z);
//		printf("x=%6d y=%6d z=%6d\r\n", x, y, z);
//		HAL_Delay(100);
//		// <-- HTC BMA400
//		// HTC Step Counter -->
//		MPU_Get_Gyroscope(&x, &y, &z);
//		if (z < z_step_threshold && !have_step) {
//			have_step = 1;
//			step_count += 1;
//		}
//		if (z >= z_step_threshold && have_step) {
//			have_step = 0;
//		}
//		HAL_Delay(10);
//      // <-- HTC Step Counter
// HTC Step Counter Display -->
		MPU_Get_Gyroscope(&x, &y, &z);
		if (z < z_step_threshold && !have_step) {
			have_step = 1;
			snprintf(display_buffer, DISPLAY_BUF_LEN, "%d", step_count);
			LCD_Font(5, 45, display_buffer, _12_Sans, 1, BLACK);
			step_count += 1;
			snprintf(display_buffer, DISPLAY_BUF_LEN, "%d", step_count);
			LCD_Font(5, 45, display_buffer, _12_Sans, 1, GREEN);
		}
		if (z >= z_step_threshold && have_step) {
			have_step = 0;
		}

		// <-- HTC Step Counter Display

	}

	// HTC BMA400	-->
	// <-- HTC BMA400

	/* USER CODE END 3 */
}

/**
 * @brief System Clock Configuration
 * @retval None
 */
void SystemClock_Config(void) {
	RCC_OscInitTypeDef RCC_OscInitStruct = { 0 };
	RCC_ClkInitTypeDef RCC_ClkInitStruct = { 0 };

	__HAL_FLASH_SET_LATENCY(FLASH_LATENCY_0);

	/** Initializes the RCC Oscillators according to the specified parameters
	 * in the RCC_OscInitTypeDef structure.
	 */
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
	RCC_OscInitStruct.HSIState = RCC_HSI_ON;
	RCC_OscInitStruct.HSIDiv = RCC_HSI_DIV4;
	RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
	if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
		Error_Handler();
	}

	/** Initializes the CPU, AHB and APB buses clocks
	 */
	RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
			| RCC_CLOCKTYPE_PCLK1;
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
	RCC_ClkInitStruct.SYSCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_HCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_APB1_DIV1;

	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK) {
		Error_Handler();
	}
}

/**
 * @brief I2C1 Initialization Function
 * @param None
 * @retval None
 */
static void MX_I2C1_Init(void) {

	/* USER CODE BEGIN I2C1_Init 0 */

	/* USER CODE END I2C1_Init 0 */

	/* USER CODE BEGIN I2C1_Init 1 */

	/* USER CODE END I2C1_Init 1 */
	hi2c1.Instance = I2C1;
	hi2c1.Init.Timing = 0x00402D41;
	hi2c1.Init.OwnAddress1 = 0;
	hi2c1.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
	hi2c1.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
	hi2c1.Init.OwnAddress2 = 0;
	hi2c1.Init.OwnAddress2Masks = I2C_OA2_NOMASK;
	hi2c1.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
	hi2c1.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;
	if (HAL_I2C_Init(&hi2c1) != HAL_OK) {
		Error_Handler();
	}

	/** Configure Analogue filter
	 */
	if (HAL_I2CEx_ConfigAnalogFilter(&hi2c1, I2C_ANALOGFILTER_ENABLE)
			!= HAL_OK) {
		Error_Handler();
	}

	/** Configure Digital filter
	 */
	if (HAL_I2CEx_ConfigDigitalFilter(&hi2c1, 0) != HAL_OK) {
		Error_Handler();
	}
	/* USER CODE BEGIN I2C1_Init 2 */

	/* USER CODE END I2C1_Init 2 */

}

/**
 * @brief SPI1 Initialization Function
 * @param None
 * @retval None
 */
static void MX_SPI1_Init(void) {

	/* USER CODE BEGIN SPI1_Init 0 */

	/* USER CODE END SPI1_Init 0 */

	/* USER CODE BEGIN SPI1_Init 1 */

	/* USER CODE END SPI1_Init 1 */
	/* SPI1 parameter configuration*/
	hspi1.Instance = SPI1;
	hspi1.Init.Mode = SPI_MODE_MASTER;
	hspi1.Init.Direction = SPI_DIRECTION_2LINES;
	hspi1.Init.DataSize = SPI_DATASIZE_8BIT;
	hspi1.Init.CLKPolarity = SPI_POLARITY_LOW;
	hspi1.Init.CLKPhase = SPI_PHASE_1EDGE;
	hspi1.Init.NSS = SPI_NSS_SOFT;
	hspi1.Init.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_2;
	hspi1.Init.FirstBit = SPI_FIRSTBIT_MSB;
	hspi1.Init.TIMode = SPI_TIMODE_DISABLE;
	hspi1.Init.CRCCalculation = SPI_CRCCALCULATION_DISABLE;
	hspi1.Init.CRCPolynomial = 7;
	hspi1.Init.CRCLength = SPI_CRC_LENGTH_DATASIZE;
	hspi1.Init.NSSPMode = SPI_NSS_PULSE_ENABLE;
	if (HAL_SPI_Init(&hspi1) != HAL_OK) {
		Error_Handler();
	}
	/* USER CODE BEGIN SPI1_Init 2 */

	/* USER CODE END SPI1_Init 2 */

}

/**
 * @brief USART1 Initialization Function
 * @param None
 * @retval None
 */
static void MX_USART1_UART_Init(void) {

	/* USER CODE BEGIN USART1_Init 0 */

	/* USER CODE END USART1_Init 0 */

	/* USER CODE BEGIN USART1_Init 1 */

	/* USER CODE END USART1_Init 1 */
	huart1.Instance = USART1;
	huart1.Init.BaudRate = 115200;
	huart1.Init.WordLength = UART_WORDLENGTH_8B;
	huart1.Init.StopBits = UART_STOPBITS_1;
	huart1.Init.Parity = UART_PARITY_NONE;
	huart1.Init.Mode = UART_MODE_TX_RX;
	huart1.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	huart1.Init.OverSampling = UART_OVERSAMPLING_16;
	huart1.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
	huart1.Init.ClockPrescaler = UART_PRESCALER_DIV1;
	huart1.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
	if (HAL_UART_Init(&huart1) != HAL_OK) {
		Error_Handler();
	}
	if (HAL_UARTEx_SetTxFifoThreshold(&huart1, UART_TXFIFO_THRESHOLD_1_8)
			!= HAL_OK) {
		Error_Handler();
	}
	if (HAL_UARTEx_SetRxFifoThreshold(&huart1, UART_RXFIFO_THRESHOLD_1_8)
			!= HAL_OK) {
		Error_Handler();
	}
	if (HAL_UARTEx_DisableFifoMode(&huart1) != HAL_OK) {
		Error_Handler();
	}
	/* USER CODE BEGIN USART1_Init 2 */

	/* USER CODE END USART1_Init 2 */

}

/**
 * @brief GPIO Initialization Function
 * @param None
 * @retval None
 */
static void MX_GPIO_Init(void) {
	GPIO_InitTypeDef GPIO_InitStruct = { 0 };
	/* USER CODE BEGIN MX_GPIO_Init_1 */

	/* USER CODE END MX_GPIO_Init_1 */

	/* GPIO Ports Clock Enable */
	__HAL_RCC_GPIOB_CLK_ENABLE();
	__HAL_RCC_GPIOC_CLK_ENABLE();
	__HAL_RCC_GPIOA_CLK_ENABLE();

	/*Configure GPIO pin Output Level */
	HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_RESET);

	/*Configure GPIO pin Output Level */
	HAL_GPIO_WritePin(GPIOA,
	DISPLAY_RESET_Pin | DISPLAY_DC_Pin | DISPLAY_CS_Pin, GPIO_PIN_RESET);

	/*Configure GPIO pin : LED_Pin */
	GPIO_InitStruct.Pin = LED_Pin;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(LED_GPIO_Port, &GPIO_InitStruct);

	/*Configure GPIO pin : ACC_INT1_Pin */
	GPIO_InitStruct.Pin = ACC_INT1_Pin;
	GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	HAL_GPIO_Init(ACC_INT1_GPIO_Port, &GPIO_InitStruct);

	/*Configure GPIO pins : DISPLAY_RESET_Pin DISPLAY_DC_Pin DISPLAY_CS_Pin */
	GPIO_InitStruct.Pin = DISPLAY_RESET_Pin | DISPLAY_DC_Pin | DISPLAY_CS_Pin;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

	/* EXTI interrupt init*/
	HAL_NVIC_SetPriority(EXTI2_3_IRQn, 0, 0);
	HAL_NVIC_EnableIRQ(EXTI2_3_IRQn);

	/* USER CODE BEGIN MX_GPIO_Init_2 */

	/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {
	if (GPIO_Pin == ACC_INT1_Pin) {
		//int1_flag = 1;
	}
}

/* USER CODE END 4 */

/**
 * @brief  This function is executed in case of error occurrence.
 * @retval None
 */
void Error_Handler(void) {
	/* USER CODE BEGIN Error_Handler_Debug */
	/* User can add his own implementation to report the HAL error return state */
	__disable_irq();
	while (1) {
	}
	/* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
