/**
 ******************************************************************************
 * @file           : main.c
 * @brief          : STM32G431CBU6
 *
 * Clock tree:
 *   HSE (8 MHz) -> PLLM (/2) -> 4 MHz -> PLLN (x85) -> 340 MHz VCO
 *                                                 -> PLLR (/2) -> 170 MHz SYSCLK
 ******************************************************************************
 */

#include "stm32g431xx.h"
#include "stm32g4xx.h"

int main(void)
{
    /* Loop forever */
    for (;;);
}
