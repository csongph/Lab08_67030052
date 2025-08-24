#include <stdio.h>
#include "sensor.h"
#include "display.h"
#include "led.h"

void app_main(void)
{
  sensor_init();
  display_init();
  led_init();
}