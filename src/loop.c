#include "main.h"

void loop()
{
        HAL_Delay(1000);
        HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);

        // HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
}