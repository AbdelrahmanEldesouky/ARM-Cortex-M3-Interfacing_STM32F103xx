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
					GPIOA->CRL &= ~ (GPIO_NIBBLE_MASK << (Copy_uint8PinID * GPIO_NIBBLE_SIZE)) ;
					GPIOA->CRL |= (Copy_uint8PinDirection << (Copy_uint8PinID * GPIO_NIBBLE_SIZE)) ;
				}
				else if (Copy_uint8PinID <= GPIO_PIN15)
				{
					Copy_uint8PinID -= GPIO_UPPER_PIN ;
					GPIOA->CRH &= ~ (GPIO_NIBBLE_MASK << (Copy_uint8PinID * GPIO_NIBBLE_SIZE)) ;
					GPIOA->CRH |= (Copy_uint8PinDirection << (Copy_uint8PinID * GPIO_NIBBLE_SIZE)) ;
				}
				else
				{
					Local_uint8ErrorState = NOK ;
				}
				break ;
			case GPIO_PORTB :
				if (Copy_uint8PinID < GPIO_PIN8)
				{
					GPIOB->CRL &= ~ (GPIO_NIBBLE_MASK << (Copy_uint8PinID * GPIO_NIBBLE_SIZE)) ;
					GPIOB->CRL |= (Copy_uint8PinDirection << (Copy_uint8PinID * GPIO_NIBBLE_SIZE)) ;
				}
				else if (Copy_uint8PinID <= GPIO_PIN15)
				{
					Copy_uint8PinID -= GPIO_UPPER_PIN ;
					GPIOB->CRH &= ~ (GPIO_NIBBLE_MASK << (Copy_uint8PinID * GPIO_NIBBLE_SIZE)) ;
					GPIOB->CRH |= (Copy_uint8PinDirection << (Copy_uint8PinID * GPIO_NIBBLE_SIZE)) ;
				}
				else
				{
					Local_uint8ErrorState = NOK ;
				}
				break ;
			case GPIO_PORTC :
				if (Copy_uint8PinID < GPIO_PIN8)
				{
					GPIOC->CRL &= ~ (GPIO_NIBBLE_MASK << (Copy_uint8PinID * GPIO_NIBBLE_SIZE)) ;
					GPIOC->CRL |= (Copy_uint8PinDirection << (Copy_uint8PinID * GPIO_NIBBLE_SIZE)) ;
				}
				else if (Copy_uint8PinID <= GPIO_PIN15)
				{
					Copy_uint8PinID -= GPIO_UPPER_PIN ;
					GPIOC->CRH &= ~ (GPIO_NIBBLE_MASK << (Copy_uint8PinID * GPIO_NIBBLE_SIZE)) ;
					GPIOC->CRH |= (Copy_uint8PinDirection << (Copy_uint8PinID * GPIO_NIBBLE_SIZE)) ;
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
					GPIOA->BRR = (1 << Copy_uint8PinID) ; break ;
				}
				else if (Copy_uint8PinValue == GPIO_PIN_HIGH)
				{
					GPIOA->BSRR = (1 << Copy_uint8PinID) ; break ;
				}
				else
				{
					Local_uint8ErrorState = NOK ;
				}
				break ;
			case GPIO_PORTB :
				if (Copy_uint8PinValue == GPIO_PIN_LOW)
				{
					GPIOB->BRR = (1 << Copy_uint8PinID) ; break ;
				}
				else if (Copy_uint8PinValue == GPIO_PIN_HIGH)
				{
					GPIOB->BSRR = (1 << Copy_uint8PinID) ; break ;
				}
				else
				{
					Local_uint8ErrorState = NOK ;
				}
				break ;
			case GPIO_PORTC :
				if (Copy_uint8PinValue == GPIO_PIN_LOW)
				{
					GPIOC->BRR = (1 << Copy_uint8PinID) ; break ;
				}
				else if (Copy_uint8PinValue == GPIO_PIN_HIGH)
				{
					GPIOC->BSRR = (1 << Copy_uint8PinID) ; break ;
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
				case GPIO_PORTA : * Copy_puint8PinState = GET_BIT(GPIOA->IDR , Copy_uint8PinID) ; break ;
				case GPIO_PORTB : * Copy_puint8PinState = GET_BIT(GPIOB->IDR , Copy_uint8PinID) ; break ;
				case GPIO_PORTC : * Copy_puint8PinState = GET_BIT(GPIOC->IDR , Copy_uint8PinID) ; break ;
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
					GPIOA->CRL = Copy_uint8PortDirection * GPIO_PORT_DIR_MUL ;
					GPIOA->CRH = Copy_uint8PortDirection * GPIO_PORT_DIR_MUL ;
				break ;
			case GPIO_PORTB :
					GPIOB->CRL = Copy_uint8PortDirection * GPIO_PORT_DIR_MUL ;
					GPIOB->CRH = Copy_uint8PortDirection * GPIO_PORT_DIR_MUL ;
				break ;
			case GPIO_PORTC :
					GPIOC->CRL = Copy_uint8PortDirection * GPIO_PORT_DIR_MUL ;
					GPIOC->CRH = Copy_uint8PortDirection * GPIO_PORT_DIR_MUL ;
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
			case GPIO_PORTA : GPIOA->ODR = Copy_uint8PortValue ; break ;
			case GPIO_PORTB : GPIOB->ODR = Copy_uint8PortValue ; break ;
			case GPIO_PORTC : GPIOC->ODR = Copy_uint8PortValue ; break ;
			default : Local_uint8ErrorState = NOK ; break ;
	}
	return Local_uint8ErrorState ;
}

uint8 GPIO_uint8GetPortValue		(uint8 Copy_uint8PortID , uint16 * Copy_puint8PortState)
{
	uint8 Local_uint8ErrorState = OK ;
	switch	(Copy_uint8PortID)
	{
			case GPIO_PORTA : * Copy_puint8PortState = GPIOA->IDR ; break ;
			case GPIO_PORTB : * Copy_puint8PortState = GPIOB->IDR ; break ;
			case GPIO_PORTC : * Copy_puint8PortState = GPIOC->IDR ; break ;
			default : Local_uint8ErrorState = NOK ; break ;
	}
	return Local_uint8ErrorState ;
}
