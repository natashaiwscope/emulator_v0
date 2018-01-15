#include <stdio.h>
int main(void)
{
    int i, j;
    char buffer[100];
    for (j = 0; j < 10; j++)
    for (i = 0; i < 10; i++)
    {
        led_on(i);
        osDelay(2);
        led_off(i);
        osDelay(2);
    }

    return 0;
}
