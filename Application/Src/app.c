#include "app.h"
#include "driver.h"
#include "os.h"
#include <stdio.h>

void app_print(void)
{
    os_print();
    driver_print();

    printf("___________This is the CMake Application______________\n");
}