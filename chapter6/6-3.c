#include <stdio.h>

int main(void)
{
    int a = 1;
    
    do
    {
        /* code */
        a = a * 2;
    } while (a < 10/* condition */);

    printf("a : %d\n", a);

    return 0;
}