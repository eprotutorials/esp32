#include <stdio.h>

#include "ble_rgb.h"
#include "rgb.h"

void app_main(void)
{
    rgb_init();
    ble_rgb_init();
}
