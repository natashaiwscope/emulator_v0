#include <stdio.h>
int main(void)
{
    int i, j;
    char buffer[100];

    change_tab(2);

    wieg_open_csv("carddata.csv");
    statusbar("Starting Execution");
    //wieg_gui_pled(5, 6, 9);

    while (wieg_fetch_one())
    {
        osDelay(1200);
        wieg_emu_csvrec();

    }

    for (i = 5; i < 10; i++)
    {
        osDelay(1200);
        wieg_emu_rec(0, i);
    }


    change_tab(2);

    return 0;
}
