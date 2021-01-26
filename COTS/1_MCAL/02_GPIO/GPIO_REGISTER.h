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

	typedef struct
	{
		volatile uint32 CRL ;
		volatile uint32 CRH ;
		volatile uint32 IDR ;
		volatile uint32 ODR ;
		volatile uint32 BSRR ;
		volatile uint32 BRR ;
		volatile uint32 LCKR ;
	}GPIO;
	
	#define GPIOA		((volatile GPIO * )(0X40010800))
	#define GPIOB		((volatile GPIO * )(0X40010C00))
	#define GPIOC		((volatile GPIO * )(0X40011000))
	
#endif
