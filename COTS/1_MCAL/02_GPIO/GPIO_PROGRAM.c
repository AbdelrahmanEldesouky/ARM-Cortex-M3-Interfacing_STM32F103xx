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

#include "GPIO_PRIVATE.h"
#include "GPIO_CONFIG.h"
#include "GPIO_INTERFACE.h"
#include "GPIO_REGISTER.h"

uint8 GPIO_uint8SetPinDirection		(uint8 Copy_uint8PortID , uint8 Copy_uint8PinID , uint8 Copy_uint8PinDirection)
{
	uint8 Local_uint8ErrorState = OK ;

	switch	(Copy_uint8PortID)
	{
			case GPIO_PORTA :
				if (Copy_uint8PinID < GPIO_PIN8)
				{
					GPIOA_CRL = (Copy_uint8PinDirection << (Copy_uint8PinID * GPIO_NIBBLE)) ;
				}
				else if (Copy_uint8PinID <= GPIO_PIN15)
				{
					Copy_uint8PinID -= GPIO_UPPER_PIN ;
					GPIOA_CRH = (Copy_uint8PinDirection << (Copy_uint8PinID * GPIO_NIBBLE)) ;
				}
				else
				{
					Local_uint8ErrorState = NOK ;
				}
				break ;
			case GPIO_PORTB :
				if (Copy_uint8PinID < GPIO_PIN8)
				{
					GPIOB_CRL = (Copy_uint8PinDirection << (Copy_uint8PinID * GPIO_NIBBLE)) ;
				}
				else if (Copy_uint8PinID <= GPIO_PIN15)
				{
					Copy_uint8PinID -= GPIO_UPPER_PIN ;
					GPIOB_CRH = (Copy_uint8PinDirection << (Copy_uint8PinID * GPIO_NIBBLE)) ;
				}
				else
				{
					Local_uint8ErrorState = NOK ;
				}
				break ;
			case GPIO_PORTC :
				if (Copy_uint8PinID < GPIO_PIN8)
				{
					GPIOC_CRL = (Copy_uint8PinDirection << (Copy_uint8PinID * GPIO_NIBBLE)) ;
				}
				else if (Copy_uint8PinID <= GPIO_PIN15)
				{
					Copy_uint8PinID -= GPIO_UPPER_PIN ;
					GPIOC_CRH = (Copy_uint8PinDirection << (Copy_uint8PinID * GPIO_NIBBLE)) ;
				}
				else
				{
					Local_uint8ErrorState = NOK ;
				}
				break ;
			default : Local_uint8ErrorState = NOK ; break ;
	}

	return Local_uint8ErrorState ;
}

uint8 GPIO_uint8SetPinValue			(uint8 Copy_uint8PortID , uint8 Copy_uint8PinID , uint8 Copy_uint8PinValue)
{
	uint8 Local_uint8ErrorState = OK ;

	switch	(Copy_uint8PortID)
	{
			case GPIO_PORTA :
				if (Copy_uint8PinValue == GPIO_PIN_LOW)
				{
					GPIOA_BRR = (1 << Copy_uint8PinID) ; break ;
				}
				else if (Copy_uint8PinValue == GPIO_PIN_HIGH)
				{
					GPIOA_BSRR = (1 << Copy_uint8PinID) ; break ;
				}
				else
				{
					Local_uint8ErrorState = NOK ;
				}
				break ;
			case GPIO_PORTB :
				if (Copy_uint8PinValue == GPIO_PIN_LOW)
				{
					GPIOB_BRR = (1 << Copy_uint8PinID) ; break ;
				}
				else if (Copy_uint8PinValue == GPIO_PIN_HIGH)
				{
					GPIOB_BSRR = (1 << Copy_uint8PinID) ; break ;
				}
				else
				{
					Local_uint8ErrorState = NOK ;
				}
				break ;
			case GPIO_PORTC :
				if (Copy_uint8PinValue == GPIO_PIN_LOW)
				{
					GPIOC_BRR = (1 << Copy_uint8PinID) ; break ;
				}
				else if (Copy_uint8PinValue == GPIO_PIN_HIGH)
				{
					GPIOC_BSRR = (1 << Copy_uint8PinID) ; break ;
				}
				else
				{
					Local_uint8ErrorState = NOK ;
				}
				break ;
			default : Local_uint8ErrorState = NOK ; break ;
	}

	return Local_uint8ErrorState ;
}

uint8 GPIO_uint8GetPinValue			(uint8 Copy_uint8PortID , uint8 Copy_uint8PinID , uint8 * Copy_puint8PinState)
{
	uint8 Local_uint8ErrorState = OK ;

	if (Copy_uint8PinID < 32)
	{
		switch	(Copy_uint8PortID)
		{
				case GPIO_PORTA : * Copy_puint8PinState = GET_BIT(GPIOA_IDR , Copy_uint8PinID) ; break ;
				case GPIO_PORTB : * Copy_puint8PinState = GET_BIT(GPIOB_IDR , Copy_uint8PinID) ; break ;
				case GPIO_PORTC : * Copy_puint8PinState = GET_BIT(GPIOC_IDR , Copy_uint8PinID) ; break ;
				default : Local_uint8ErrorState = NOK ; break ;
		}
	}
	else
	{
		Local_uint8ErrorState = NOK ;
	}

	return Local_uint8ErrorState ;
}

uint8 GPIO_uint8SetPortDirection	(uint8 Copy_uint8PortID , uint32 Copy_uint8PortDirection)
{
	uint8 Local_uint8ErrorState = OK ;

	switch	(Copy_uint8PortID)
	{
			case GPIO_PORTA :
					GPIOA_CRL = Copy_uint8PortDirection * GPIO_PORT_DIR_MUL ;
					GPIOA_CRH = Copy_uint8PortDirection * GPIO_PORT_DIR_MUL ;
				break ;
			case GPIO_PORTB :
					GPIOB_CRL = Copy_uint8PortDirection * GPIO_PORT_DIR_MUL ;
					GPIOB_CRH = Copy_uint8PortDirection * GPIO_PORT_DIR_MUL ;
				break ;
			case GPIO_PORTC :
					GPIOC_CRL = Copy_uint8PortDirection * GPIO_PORT_DIR_MUL ;
					GPIOC_CRH = Copy_uint8PortDirection * GPIO_PORT_DIR_MUL ;
				break ;
			default : Local_uint8ErrorState = NOK ; break ;
	}

	return Local_uint8ErrorState ;
}

uint8 GPIO_uint8SetPortValue		(uint8 Copy_uint8PortID , uint16 Copy_uint8PortValue)
{
	uint8 Local_uint8ErrorState = OK ;
	switch	(Copy_uint8PortID)
	{
			case GPIO_PORTA : GPIOA_ODR = Copy_uint8PortValue ; break ;
			case GPIO_PORTB : GPIOB_ODR = Copy_uint8PortValue ; break ;
			case GPIO_PORTC : GPIOC_ODR = Copy_uint8PortValue ; break ;
			default : Local_uint8ErrorState = NOK ; break ;
	}
	return Local_uint8ErrorState ;
}

uint8 GPIO_uint8GetPortValue		(uint8 Copy_uint8PortID , uint16 * Copy_puint8PortState)
{
	uint8 Local_uint8ErrorState = OK ;
	switch	(Copy_uint8PortID)
	{
			case GPIO_PORTA : * Copy_puint8PortState = GPIOA_IDR ; break ;
			case GPIO_PORTB : * Copy_puint8PortState = GPIOB_IDR ; break ;
			case GPIO_PORTC : * Copy_puint8PortState = GPIOC_IDR ; break ;
			default : Local_uint8ErrorState = NOK ; break ;
	}
	return Local_uint8ErrorState ;
}
