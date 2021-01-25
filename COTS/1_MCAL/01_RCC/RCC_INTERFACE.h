/***************************************************************/
/***************************************************************/
/************		Author: A. S. Eldesouky			************/
/************		Layer: MCAL						************/
/************		SWC: RCC						************/
/************		Date: 19-12-2020				************/
/************		Version: 1.00					************/
/***************************************************************/
/***************************************************************/

/*File Gard*/
#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_

	#define RCC_AHB					0
	#define RCC_APB2				1
	#define RCC_APB1				2

	#define RCC_AHB_DMA1_CLOCK		0
 	#define RCC_AHB_DMA2_CLOCK		1
 	#define RCC_AHB_SRAM_CLOCK		2
 	#define RCC_AHB_FLITF_CLOCK		4
 	#define RCC_AHB_CRC_CLOCK		6
 	#define RCC_AHB_FSMC_CLOCK		8
 	#define RCC_AHB_SDIO_CLOCK		10

	#define RCC_APB2_AFIO_CLOCK		0
 	#define RCC_APB2_IOPA_CLOCK		2
 	#define RCC_APB2_IOPB_CLOCK		3
 	#define RCC_APB2_IOPC_CLOCK		4
 	#define RCC_APB2_IOPD_CLOCK		5
 	#define RCC_APB2_IOPE_CLOCK		6
 	#define RCC_APB2_IOPF_CLOCK		7
	#define RCC_APB2_IOPG_CLOCK		8
 	#define RCC_APB2_ADC1_CLOCK		9
 	#define RCC_APB2_ADC2_CLOCK		10
 	#define RCC_APB2_TIM1_CLOCK		11
 	#define RCC_APB2_SPI1_CLOCK		12
 	#define RCC_APB2_TIM8_CLOCK		13
 	#define RCC_APB2_USART1_CLOCK	14
 	#define RCC_APB2_ADC3_CLOCK		15
 	#define RCC_APB2_TIM9_CLOCK		19
 	#define RCC_APB2_TIM10_CLOCK	20
 	#define RCC_APB2_TIM11_CLOCK	21

	#define RCC_APB1_TIM2_CLOCK		0
 	#define RCC_APB1_TIM3_CLOCK		1
 	#define RCC_APB1_TIM4_CLOCK		2
 	#define RCC_APB1_TIM5_CLOCK		3
 	#define RCC_APB1_TIM6_CLOCK		4
 	#define RCC_APB1_TIM7_CLOCK		5
 	#define RCC_APB1_TIM12_CLOCK	6
	#define RCC_APB1_TIM13_CLOCK	7
 	#define RCC_APB1_TIM14_CLOCK	8
 	#define RCC_APB1_WWDG_CLOCK		11
 	#define RCC_APB1_SPI2_CLOCK		14
 	#define RCC_APB1_SPI3_CLOCK		15
 	#define RCC_APB1_USART2_CLOCK	17
 	#define RCC_APB1_USART3_CLOCK	18
 	#define RCC_APB1_USART4_CLOCK	19
 	#define RCC_APB1_USART5_CLOCK	20
 	#define RCC_APB1_I2C1_CLOCK		21
 	#define RCC_APB1_I2C2_CLOCK		22
 	#define RCC_APB1_USB_CLOCK		23
 	#define RCC_APB1_CAN_CLOCK		25
 	#define RCC_APB1_BKP_CLOCK		27
 	#define RCC_APB1_PWR_CLOCK		28
 	#define RCC_APB1_DAC_CLOCK		29

	#define RCC_MOC_NO_CLOCK		0
	#define RCC_MOC_SYS_CLOCK		4
	#define RCC_MOC_HSI_CLOCK		5
	#define RCC_MOC_HSE_CLOCK		6
	#define RCC_MOC_PLL_BY_2_CLOCK	7


	void RCC_voidInit (void) ; 
	
	uint8 RCC_uint8EnableClock 	(uint8 Copy_uint8BusID , uint8 Copy_uint8PeripheralID) ;
	
	uint8 RCC_uint8DisableClock (uint8 Copy_uint8BusID , uint8 Copy_uint8PeripheralID) ; 
	
	uint8 RCC_uint8MOC			(uint8 Copy_uint8Clock) ;

#endif
