/***************************************************************/
/***************************************************************/
/************		Author: A. S. Eldesouky			************/
/************		Layer: MCAL						************/
/************		SWC: GPIO						************/
/************		Date: 24-01-2021				************/
/************		Version: 1.00					************/
/***************************************************************/
/***************************************************************/

/*File Gard*/
#ifndef GPIO_REGISTER_H_
#define GPIO_REGISTER_H_
	
	#define GPIOA_BASE_ADDRESS		(0X40010800)
	#define GPIOB_BASE_ADDRESS		(0X40020C00)
	#define GPIOC_BASE_ADDRESS		(0X40011000)

	#define GPIO_CRL_OFFSET			(0X00)
	#define GPIO_CRH_OFFSET			(0X04)
	#define GPIO_IDR_OFFSET			(0X08)
	#define GPIO_ODR_OFFSET			(0X0C)
	#define GPIO_BSRR_OFFSET		(0X10)
	#define GPIO_BRR_OFFSET			(0X14)
	#define GPIO_LCKR_OFFSET		(0X18)
	
	#define GPIOA_CRL				*((volatile uint32 *) (GPIOA_BASE_ADDRESS+GPIO_CRL_OFFSET))
	#define GPIOA_CRH				*((volatile uint32 *) (GPIOA_BASE_ADDRESS+GPIO_CRH_OFFSET))
	#define GPIOA_IDR				*((volatile uint32 *) (GPIOA_BASE_ADDRESS+GPIO_IDR_OFFSET))
	#define GPIOA_ODR				*((volatile uint32 *) (GPIOA_BASE_ADDRESS+GPIO_ODR_OFFSET))
	#define GPIOA_BSRR				*((volatile uint32 *) (GPIOA_BASE_ADDRESS+GPIO_BSRR_OFFSET))
	#define GPIOA_BRR				*((volatile uint32 *) (GPIOA_BASE_ADDRESS+GPIO_BRR_OFFSET))
	#define GPIOA_LCKR				*((volatile uint32 *) (GPIOA_BASE_ADDRESS+GPIO_LCKR_OFFSET))

	#define GPIOB_CRL				*((volatile uint32 *) (GPIOB_BASE_ADDRESS+GPIO_CRL_OFFSET))
	#define GPIOB_CRH				*((volatile uint32 *) (GPIOB_BASE_ADDRESS+GPIO_CRH_OFFSET))
	#define GPIOB_IDR				*((volatile uint32 *) (GPIOB_BASE_ADDRESS+GPIO_IDR_OFFSET))
	#define GPIOB_ODR				*((volatile uint32 *) (GPIOB_BASE_ADDRESS+GPIO_ODR_OFFSET))
	#define GPIOB_BSRR				*((volatile uint32 *) (GPIOB_BASE_ADDRESS+GPIO_BSRR_OFFSET))
	#define GPIOB_BRR				*((volatile uint32 *) (GPIOB_BASE_ADDRESS+GPIO_BRR_OFFSET))
	#define GPIOB_LCKR				*((volatile uint32 *) (GPIOB_BASE_ADDRESS+GPIO_LCKR_OFFSET))

	#define GPIOC_CRL				*((volatile uint32 *) (GPIOC_BASE_ADDRESS+GPIO_CRL_OFFSET))
	#define GPIOC_CRH				*((volatile uint32 *) (GPIOC_BASE_ADDRESS+GPIO_CRH_OFFSET))
	#define GPIOC_IDR				*((volatile uint32 *) (GPIOC_BASE_ADDRESS+GPIO_IDR_OFFSET))
	#define GPIOC_ODR				*((volatile uint32 *) (GPIOC_BASE_ADDRESS+GPIO_ODR_OFFSET))
	#define GPIOC_BSRR				*((volatile uint32 *) (GPIOC_BASE_ADDRESS+GPIO_BSRR_OFFSET))
	#define GPIOC_BRR				*((volatile uint32 *) (GPIOC_BASE_ADDRESS+GPIO_BRR_OFFSET))
	#define GPIOC_LCKR				*((volatile uint32 *) (GPIOC_BASE_ADDRESS+GPIO_LCKR_OFFSET))
	
#endif
