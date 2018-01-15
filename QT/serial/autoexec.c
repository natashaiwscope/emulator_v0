#include <stdio.h>
int main(void)
{
    int i, j;
    char buffer[100];

    for (i = 0; i < 10; i++)
    {
        led_on(i);
        osDelay(200);
        led_off(i);
        osDelay(200);
    }

    return 0;
}
