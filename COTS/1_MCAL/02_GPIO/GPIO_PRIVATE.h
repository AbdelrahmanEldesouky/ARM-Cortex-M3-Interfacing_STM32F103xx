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
#ifndef GPIO_PRIVATE_H_
#define GPIO_PRIVATE_H_

#define GPIO_INPUT_ANALOG_ID			0b0000
#define GPIO_INPUT_FLOATING_ID     		0b0100
#define GPIO_INPUT_PULL_UP_DOWN_ID		0b1000

#define GPIO_OUTPUT_IO_PP_10MHZ_ID      0b0001
#define GPIO_OUTPUT_IO_OD_10MHZ_ID      0b0101
#define GPIO_OUTPUT_AF_PP_10MHZ_ID      0b1001
#define GPIO_OUTPUT_AF_OD_10MHZ_ID      0b1101

#define GPIO_OUTPUT_IO_PP_2MHZ_ID       0b0010
#define GPIO_OUTPUT_IO_OD_2MHZ_ID       0b0110
#define GPIO_OUTPUT_AF_PP_2MHZ_ID       0b1010
#define GPIO_OUTPUT_AF_OD_2MHZ_ID  		0b1110

#define GPIO_OUTPUT_IO_PP_50MHZ_ID      0b0011
#define GPIO_OUTPUT_IO_OD_50MHZ_ID      0b0111
#define GPIO_OUTPUT_AF_PP_50MHZ_ID      0b1011
#define GPIO_OUTPUT_AF_OD_50MHZ_ID      0b1111

#endif
