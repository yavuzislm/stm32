/*
 * main.h
 *
 *  Created on: Mar 7, 2024
 *      Author: islam
 *  we created this header file because we don't want to make it hard when we are reading main.c
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <stdint.h>

typedef struct
{
	uint32_t gpioAen	:1;
	uint32_t gpioBen	:1;
	uint32_t gpioCen	:1;
	uint32_t gpioDen	:1;
	uint32_t gpioEen	:1;
	uint32_t reserved	:2;
	uint32_t gpioHen	:1;
	uint32_t reserved1	:4;
	uint32_t crcen		:1;
	uint32_t reserved2	:8;
	uint32_t dma1en		:1;
	uint32_t dma2en		:1;
	uint32_t reserved3	:9;
}RCC_AHB1ENR_t;

typedef struct
{
	uint32_t mode0	:2;
	uint32_t mode1	:2;
	uint32_t mode2	:2;
	uint32_t mode3	:2;
	uint32_t mode4	:2;
	uint32_t mode5	:2;
	uint32_t mode6	:2;
	uint32_t mode7	:2;
	uint32_t mode8	:2;
	uint32_t mode9	:2;
	uint32_t mode10	:2;
	uint32_t mode11	:2;
	uint32_t mode12	:2;
	uint32_t mode13	:2;
	uint32_t mode14	:2;
	uint32_t mode15	:2;
}GPIOx_MODER_t;

typedef struct
{
	uint32_t odr0:1;
	uint32_t odr1:1;
	uint32_t odr2:1;
	uint32_t odr3:1;
	uint32_t odr4:1;
	uint32_t odr5:1;
	uint32_t odr6:1;
	uint32_t odr7:1;
	uint32_t odr8:1;
	uint32_t odr9:1;
	uint32_t odr10:1;
	uint32_t odr11:1;
	uint32_t odr12:1;
	uint32_t odr13:1;
	uint32_t odr14:1;
	uint32_t odr15:1;
	uint32_t reserved:16;
}GPIOx_ODR_t;

#endif /* MAIN_H_ */
