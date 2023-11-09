#include <stdio.h>

int main(void)
{
    int a = 0, b = 0;

    //  a가 0보다 크면 b에 1대입
    if (a > 0)
    {
        b = 1;
    }
    //  a가 0보다 크지않고 0이면 b에 2대입
    else if (a == 0)
    {
        b = 2;
    }
    //  a가 0보다 크지않고 0도 아니면 b에 3대입
    else
    {
        b = 3;
    }

    printf("b : %d\n", b);

    return 0;
}