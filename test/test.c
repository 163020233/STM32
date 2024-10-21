//
// Created by Administrator on 2024/10/22.
//

#include "test.h"
#include "stm32f4xx_hal_gpio.h"

void led(void) {

  HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
  HAL_Delay(1000);

}