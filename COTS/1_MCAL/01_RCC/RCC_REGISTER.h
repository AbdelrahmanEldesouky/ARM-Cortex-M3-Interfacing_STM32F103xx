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
#ifndef RCC_REGISTER_H_
#define RCC_REGISTER_H_
	
	#define RCC_BASE_ADDRESS		(0X40021000)
	
	#define RCC_CR_OFFSET			(0X00)
	#define RCC_CFGR_OFFSET			(0X04)
	#define RCC_CIR_OFFSET			(0X08)
	#define RCC_APB2RSTR_OFFSET		(0X0C)
	#define RCC_APB1RSTR_OFFSET		(0X10)
	#define RCC_AHBENR_OFFSET		(0X14)
	#define RCC_APB2ENR_OFFSET		(0X18)
	#define RCC_APB1ENR_OFFSET		(0X1C)
	#define RCC_BDCR_OFFSET			(0X20)
	#define RCC_CSR_OFFSET			(0X24)
	
	#define RCC_CR					*((volatile uint32 *) (RCC_CR_OFFSET+RCC_BASE_ADDRESS))
	#define RCC_CR_HSION			0
	#define RCC_CR_HSIRDY			1
	#define RCC_CR_HSEON			16
	#define RCC_CR_HSERDY			17
	#define RCC_CR_HSEBYP			18
	#define RCC_CR_CSSON			19
	#define RCC_CR_PLLON			24
	#define RCC_CR_PLLRDY			25

	#define RCC_CFGR				*((volatile uint32 *) (RCC_CFGR_OFFSET+RCC_BASE_ADDRESS))
	#define RCC_CFGR_SWS0			0
	#define RCC_CFGR_SWS1			1
	#define RCC_CFGR_HPRE			4
	#define RCC_CFGR_PPRE1			8
	#define RCC_CFGR_PPRE2			11
	#define RCC_CFGR_ADCPRE			14
	#define RCC_CFGR_PLLSRC			16
	#define RCC_CFGR_PLLXTPRE		17
	#define RCC_CFGR_PLLMUL			18
	#define RCC_CFGR_USBPRE			22
	#define RCC_CFGR_MOC			24

	#define RCC_CIR					*((volatile uint32 *) (RCC_CIR_OFFSET+RCC_BASE_ADDRESS))
	#define RCC_APB2RSTR			*((volatile uint32 *) (RCC_APB2RSTR_OFFSET+RCC_BASE_ADDRESS))
	#define RCC_APB1RSTR			*((volatile uint32 *) (RCC_APB1RSTR_OFFSET+RCC_BASE_ADDRESS))
	#define RCC_AHBENR				*((volatile uint32 *) (RCC_AHBENR_OFFSET+RCC_BASE_ADDRESS))
	#define RCC_APB2ENR				*((volatile uint32 *) (RCC_APB2ENR_OFFSET+RCC_BASE_ADDRESS))
	#define RCC_APB1ENR				*((volatile uint32 *) (RCC_APB1ENR_OFFSET+RCC_BASE_ADDRESS))
	#define RCC_BDCR				*((volatile uint32 *) (RCC_BDCR_OFFSET+RCC_BASE_ADDRESS))
	#define RCC_CSR					*((volatile uint32 *) (RCC_CSR_OFFSET+RCC_BASE_ADDRESS))
	
#endif
