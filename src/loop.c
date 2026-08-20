#include "main.h"
#include <stdio.h>

void loop(UART_HandleTypeDef* phuart2)
{
        HAL_Delay(3000);
        HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_15);
        HAL_UART_Transmit(phuart2,
                          (uint8_t*)"Debug!!!!!!!!!!!once again!!!!!!Debug!!!!!!!",
                          50,
                          100);
}