/***************************************************************/
/***************************************************************/
/************		Author: A. S. Eldesouky			************/
/************		Layer: MCAL						************/
/************		SWC: RCC						************/
/************		Date: 19-12-2020				************/
/************		Version: 1.00					************/
/***************************************************************/
/***************************************************************/

#include "STD_TYPE.h"
#include "BIT_MATH.h"

#include "RCC_PRIVATE.h"
#include "RCC_CONFIG.h"
#include "RCC_INTERFACE.h"
#include "RCC_REGISTER.h"

void RCC_voidInit (void) 
{
	/* Set System Clock */

	#if RCC_SYS_CLOCK == RCC_SYS_CLOCK_HSI

		/* Set HSI as System Clock */
		CLR_BIT(RCC_CFGR, RCC_CFGR_SWS0) ;
		CLR_BIT(RCC_CFGR, RCC_CFGR_SWS1) ;
		/* Open HSI Oscillator */
		SET_BIT(RCC_CR, RCC_CR_HSION) ;
		/* Wait until HSI Ready */
		while (GET_BIT(RCC_CR, RCC_CR_HSIRDY) == 0) ;

	#elif RCC_SYS_CLOCK == RCC_SYS_CLOCK_HSE
		/* Set HSE as System Clock */
		SET_BIT(RCC_CFGR, RCC_CFGR_SWS0) ;
		CLR_BIT(RCC_CFGR, RCC_CFGR_SWS1) ;
		/*Set External Source */
		#if RCC_HSE_SRC == RCC_HSE_SRC_CRYSTAL
				CLR_BIT(RCC_CR, RCC_CR_HSEBYP) ;
		#elif RCC_HSE_SRC == RCC_HSE_SRC_RC
				SET_BIT(RCC_CR, RCC_CR_HSEBYP) ;
		#else
		#error ("Wrong RCC_HSE_SRC Configuration")
		#endif
		/* Open HSE Oscillator */
		SET_BIT(RCC_CR, RCC_CR_HSEON) ;
		/* Wait until HSE Ready */
		while (GET_BIT(RCC_CR, RCC_CR_HSERDY) == 0) ;
	#elif RCC_SYS_CLOCK == RCC_SYS_CLOCK_PLL
		/* Set PLL Clock */
		#if RCC_PLL_CLOCK == RCC_PLL_CLOCK_HSI_BY_2
				CLR_BIT(RCC_CFGR, RCC_CFGR_PLLSRC) ;
		#elif RCC_PLL_CLOCK == RCC_PLL_CLOCK_HSE
				CLR_BIT(RCC_CFGR, RCC_CFGR_PLLSRC) ;
				/* Set HSE input to PLL */
				#if RCC_HSE_PLL_CLOCK == RCC_HSE_PLL_CLOCK_HSE
					CLR_BIT(RCC_CFGR, RCC_CFGR_PLLXTPRE) ;
				#elif RCC_HSE_PLL_CLOCK == RCC_HSE_PLL_CLOCK_HSE_BY_2
					SET_BIT(RCC_CFGR, RCC_CFGR_PLLXTPRE) ;
				#else
				#error ("Wrong RCC_HSE_PLL_CLOCK Configuration")
				#endif
		#else
		#error ("Wrong RCC_PLL_CLOCK Configuration")
		#endif
		/* Open PLL Oscillator */
		SET_BIT(RCC_CR, RCC_CR_PLLON) ;
		/* Wait until PLL Ready */
		while (GET_BIT(RCC_CR, RCC_CR_PLLRDY) == 0) ;
		/* Set PLL as System Clock */
		CLR_BIT(RCC_CFGR, RCC_CFGR_SWS0) ;
		SET_BIT(RCC_CFGR, RCC_CFGR_SWS1) ;
		/* Set PLL Multiplication Factor */
		RCC_CFGR |= (RCC_PLLMUL<<RCC_CFGR_PLLMUL) ;
	#else
		#error ("Wrong RCC_SYS_CLOCK Configuration")
	#endif

	/* Set ADC Prescaler */
	RCC_CFGR |= (RCC_ADCPRE << RCC_CFGR_ADCPRE) ;

	/* Set AHB Prescaler */
	RCC_CFGR |= (RCC_AHBPRE << RCC_CFGR_HPRE) ;

	/* Set APB1 Prescaler */
	RCC_CFGR |= (RCC_APBPRE1 << RCC_CFGR_PPRE1) ;

	/* Set APB2 Prescaler */
	RCC_CFGR |= (RCC_APBPRE2 << RCC_CFGR_PPRE2) ;

	/* Set USB Prescaler */
	#if RCC_USBPRE == DISABLE
		CLR_BIT(RCC_CFGR, RCC_CFGR_USBPRE) ;
	#elif RCC_USBPRE == ENABLE
		SET_BIT(RCC_CFGR, RCC_CFGR_USBPRE) ;
	#else
		#error ("Wrong RCC_USBPRE Configuration")
	#endif
}
	
uint8 RCC_uint8EnableClock (uint8 Copy_uint8BusID , uint8 Copy_uint8PeripheralID) 
{
	uint8 Local_uint8ErrorState = OK ;
	
	if (Copy_uint8PeripheralID < 32)
	{
		switch (Copy_uint8BusID)
		{
		case RCC_AHB : 	SET_BIT(RCC_AHBENR , Copy_uint8PeripheralID) ; break ;
		case RCC_APB2 : SET_BIT(RCC_APB2ENR , Copy_uint8PeripheralID) ; break ;
		case RCC_APB1 : SET_BIT(RCC_APB1ENR , Copy_uint8PeripheralID) ; break ;
		default : Local_uint8ErrorState = NOK ;
		}
	}
	else
	{
		Local_uint8ErrorState = NOK ;
	}
	return Local_uint8ErrorState ;
}
	
uint8 RCC_uint8DisableClock (uint8 Copy_uint8BusID , uint8 Copy_uint8PeripheralID) 
{
	uint8 Local_uint8ErrorState = OK ;
	
	if (Copy_uint8PeripheralID < 32)
	{
		switch (Copy_uint8BusID)
		{
		case RCC_AHB : 	CLR_BIT(RCC_AHBENR , Copy_uint8PeripheralID) ; break ;
		case RCC_APB2 : CLR_BIT(RCC_APB2ENR , Copy_uint8PeripheralID) ; break ;
		case RCC_APB1 : CLR_BIT(RCC_APB1ENR , Copy_uint8PeripheralID) ; break ;
		default : Local_uint8ErrorState = NOK ;
		}
	}
	else
	{
		Local_uint8ErrorState = NOK ;
	}
	return Local_uint8ErrorState ;
}

uint8 RCC_uint8MOC (uint8 Copy_uint8Clock)
{
	uint8 Local_uint8ErrorState = OK ;
	if (Copy_uint8Clock < 8)
	{
		RCC_CFGR |= (Copy_uint8Clock << RCC_CFGR_MOC) ;
	}
	else
	{
		Local_uint8ErrorState = NOK ;
	}
	return Local_uint8ErrorState ;
}
