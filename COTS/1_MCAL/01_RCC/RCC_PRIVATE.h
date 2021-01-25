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
#ifndef RCC_PRIVATE_H_
#define RCC_PRIVATE_H_

#define DISABLE							0
#define ENABLE							1

#define RCC_SYS_CLOCK_HSI				0
#define RCC_SYS_CLOCK_HSE				1
#define RCC_SYS_CLOCK_PLL				2

#define RCC_HSE_SRC_CRYSTAL				0
#define RCC_HSE_SRC_RC					1

#define RCC_PLL_CLOCK_HSI_BY_2			0
#define RCC_PLL_CLOCK_HSE				1

#define RCC_HSE_PLL_CLOCK_HSE 			0
#define RCC_HSE_PLL_CLOCK_HSE_BY_2		1

#define RCC_PLLMUL_2					0
#define RCC_PLLMUL_3					1
#define RCC_PLLMUL_4					2
#define RCC_PLLMUL_5					3
#define RCC_PLLMUL_6					4
#define RCC_PLLMUL_7					5
#define RCC_PLLMUL_8					6
#define RCC_PLLMUL_9					7
#define RCC_PLLMUL_10					8
#define RCC_PLLMUL_11					9
#define RCC_PLLMUL_12					10
#define RCC_PLLMUL_13					11
#define RCC_PLLMUL_14					12
#define RCC_PLLMUL_15					13
#define RCC_PLLMUL_16					14

#define RCC_AHBPRE_BY_1					0
#define RCC_AHBPRE_BY_2					8
#define RCC_AHBPRE_BY_4					9
#define RCC_AHBPRE_BY_8					10
#define RCC_AHBPRE_BY_16				11
#define RCC_AHBPRE_BY_64				12
#define RCC_AHBPRE_BY_128				13
#define RCC_AHBPRE_BY_256				14
#define RCC_AHBPRE_BY_512				15

#define RCC_APBPRE1_BY_1				0
#define RCC_APBPRE1_BY_2				4
#define RCC_APBPRE1_BY_4				5
#define RCC_APBPRE1_BY_8				6
#define RCC_APBPRE1_BY_16				7

#define RCC_APBPRE2_BY_1				0
#define RCC_APBPRE2_BY_2				4
#define RCC_APBPRE2_BY_4				5
#define RCC_APBPRE2_BY_8				6
#define RCC_APBPRE2_BY_16				7

#define RCC_ADCPRE_BY_2					0
#define RCC_ADCPRE_BY_4					1
#define RCC_ADCPRE_BY_6					2
#define RCC_ADCPRE_BY_8					3

#endif
