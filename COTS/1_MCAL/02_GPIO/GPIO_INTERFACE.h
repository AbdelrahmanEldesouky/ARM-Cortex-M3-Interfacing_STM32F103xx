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
#ifndef GPIO_INTERFACE_H_
#define GPIO_INTERFACE_H_

#define GPIO_PORTA						0
#define GPIO_PORTB						1
#define GPIO_PORTC						2

#define GPIO_PIN0						0
#define GPIO_PIN1						1
#define GPIO_PIN2						2
#define GPIO_PIN3						3
#define GPIO_PIN4						4
#define GPIO_PIN5						5
#define GPIO_PIN6						6
#define GPIO_PIN7						7
#define GPIO_PIN8						8
#define GPIO_PIN9						9
#define GPIO_PIN10						10
#define GPIO_PIN11						11
#define GPIO_PIN12						12
#define GPIO_PIN13						13
#define GPIO_PIN14						14
#define GPIO_PIN15						15

#define GPIO_INPUT_ANALOG				GPIO_INPUT_ANALOG_ID
#define GPIO_INPUT_FLOATING				GPIO_INPUT_FLOATING_ID
#define GPIO_INPUT_PULL_UP_DOWN			GPIO_INPUT_PULL_UP_DOWN_ID

#define GPIO_OUTPUT_IO_PP_2MHZ			GPIO_OUTPUT_IO_PP_2MHZ_ID
#define GPIO_OUTPUT_IO_OD_2MHZ			GPIO_OUTPUT_IO_OD_2MHZ_ID
#define GPIO_OUTPUT_AF_PP_2MHZ			GPIO_OUTPUT_AF_PP_2MHZ_ID
#define GPIO_OUTPUT_AF_OD_2MHZ			GPIO_OUTPUT_AF_OD_2MHZ_ID

#define GPIO_OUTPUT_IO_PP_10MHZ         GPIO_OUTPUT_IO_PP_10MHZ_ID
#define GPIO_OUTPUT_IO_OD_10MHZ         GPIO_OUTPUT_IO_OD_10MHZ_ID
#define GPIO_OUTPUT_AF_PP_10MHZ         GPIO_OUTPUT_AF_PP_10MHZ_ID
#define GPIO_OUTPUT_AF_OD_10MHZ         GPIO_OUTPUT_AF_OD_10MHZ_ID

#define GPIO_OUTPUT_IO_PP_50MHZ         GPIO_OUTPUT_IO_PP_50MHZ_ID
#define GPIO_OUTPUT_IO_OD_50MHZ         GPIO_OUTPUT_IO_OD_50MHZ_ID
#define GPIO_OUTPUT_AF_PP_50MHZ         GPIO_OUTPUT_AF_PP_50MHZ_ID
#define GPIO_OUTPUT_AF_OD_50MHZ         GPIO_OUTPUT_AF_OD_50MHZ_ID

uint8 GPIO_uint8SetPinDirection		(uint8 Copy_uint8PortID , uint8 Copy_uint8PinID , uint8 Copy_uint8PinDirection) ;
uint8 GPIO_uint8SetPinValue			(uint8 Copy_uint8PortID , uint8 Copy_uint8PinID , uint8 Copy_uint8PinValue) ;
uint8 GPIO_uint8GetPinValue			(uint8 Copy_uint8PortID , uint8 Copy_uint8PinID , uint8 * Copy_puint8PinState) ;

uint8 GPIO_uint8SetPortDirection	(uint8 Copy_uint8PortID , uint32 Copy_uint8PortDirection) ;
uint8 GPIO_uint8SetPortValue		(uint8 Copy_uint8PortID , uint16 Copy_uint8PortValue) ;
uint8 GPIO_uint8GetPortValue		(uint8 Copy_uint8PortID , uint16 * Copy_puint8PortState) ;

#endif
