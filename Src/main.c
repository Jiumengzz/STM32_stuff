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
#include "main.h"


void init_led(void); // LED pin: PC6
void set_led(int32_t pin_num, int32_t val);

int main(void)
{
    init_led();
    // set_led(6,1); // turn on LED
    GPIOC-> BSRR |= 1 << 6;



    /* Loop forever */
    for (;;);
    return 0;
}

void init_led(void) {
    RCC-> AHB2ENR |= RCC_AHB2ENR_GPIOCEN; // enable GPIOC clock
    GPIOC-> MODER &= ~0x00002000; // reset register
    GPIOC-> MODER |= 0x00001000;
    // GPIOC-> MODER &= ~GPIO_MODER_MODER6_1; 
    // GPIOC-> MODER |= GPIO_MODER_MODER6_0; // PC6 01 output
    GPIOC-> OTYPER &= ~GPIO_OTYPER_OT6; // PC6 push-pull mode 
}

// void set_led(int32_t pin_num, int32_t val) {
//     GPIOC-> BSRR &= ~(1 << pin_num); 
// }