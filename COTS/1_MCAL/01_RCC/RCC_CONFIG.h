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
#ifndef RCC_CONFIG_H_
#define RCC_CONFIG_H_

	/* Set System Clock Source
	 * Choose between
	 * 1. RCC_SYS_CLOCK_HSI
	 * 2. RCC_SYS_CLOCK_HSE
	 * 3. RCC_SYS_CLOCK_PLL
	 */
	#define RCC_SYS_CLOCK	RCC_SYS_CLOCK_HSI

#if RCC_SYS_CLOCK == RCC_SYS_CLOCK_HSE
	/* Set External Source
	 * Choose between
	 * 1. RCC_HSE_SRC_CRYSTAL
	 * 2. RCC_HSE_SRC_RC
	 */
	#define RCC_HSE_SRC		RCC_HSE_SRC_CRYSTAL
#endif

#if RCC_SYS_CLOCK == RCC_SYS_CLOCK_PLL
	/* Set PLL Clock Source
	 * Choose between
	 * 1. RCC_PLL_CLOCK_HSI_BY_2
	 * 2. RCC_PLL_CLOCK_HSE
	 */
	#define RCC_PLL_CLOCK	RCC_PLL_CLOCK_HSE

	/* Set HSE PLL Clock Division Factor
	 * Choose between
	 * 1. RCC_HSE_PLL_CLOCK_HSE
	 * 2. RCC_HSE_PLL_CLOCK_HSE_BY_2
	 */
	#define RCC_HSE_PLL_CLOCK	RCC_HSE_PLL_CLOCK_HSE

	/* Set PLL Prescaler
	 * Choose RCC_PLLMUL_NO
	 * Change NO between 2 to 16
	 * Note: PLL output frequency must not exceed 72 MHz.
	 */
	#define RCC_PLLMUL	RCC_PLLMUL_2
#endif

	/* Set ADC Prescaler
	 * Choose between
	 * 1. RCC_ADCPRE_BY_2
	 * 2. RCC_ADCPRE_BY_4
	 * 3. RCC_ADCPRE_BY_6
	 * 4. RCC_ADCPRE_BY_8
	 */
	#define RCC_ADCPRE		RCC_ADCPRE_BY_2

	/* Set AHB Bus Prescaler
	 * Choose between
	 * 1. RCC_AHBPRE_BY_1
	 * 2. RCC_AHBPRE_BY_2
	 * 3. RCC_AHBPRE_BY_4
	 * 4. RCC_AHBPRE_BY_8
	 * 5. RCC_AHBPRE_BY_16
	 * 6. RCC_AHBPRE_BY_64
	 * 7. RCC_AHBPRE_BY_128
	 * 8. RCC_AHBPRE_BY_256
	 * 9. RCC_AHBPRE_BY_512
	 */
	#define RCC_AHBPRE		RCC_AHBPRE_BY_1

	/* Set APB1 Bus Prescaler
	 * Choose between
	 * 1. RCC_APBPRE1_BY_1
	 * 2. RCC_APBPRE1_BY_2
	 * 3. RCC_APBPRE1_BY_4
	 * 4. RCC_APBPRE1_BY_8
	 * 5. RCC_APBPRE1_BY_16
	 */
	#define RCC_APBPRE1		RCC_APBPRE1_BY_1

	/* Set APB2 Bus Prescaler
	 * Choose between
	 * 1. RCC_APBPRE2_BY_1
	 * 2. RCC_APBPRE2_BY_2
	 * 3. RCC_APBPRE2_BY_4
	 * 4. RCC_APBPRE2_BY_8
	 * 5. RCC_APBPRE2_BY_16
	 */
	#define RCC_APBPRE2		RCC_APBPRE2_BY_1

	/* Set USB Prescaler
	 * Choose between
	 * 1. ENABLE
	 * 2. DISABLE
	 */
	#define RCC_USBPRE		DISABLE
	
#endif
