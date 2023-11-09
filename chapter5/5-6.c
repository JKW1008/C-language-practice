#include <stdio.h>

int main(void)
{
    int rank = 2, m = 0;

    switch (rank)
    {
    case /* constant-expression */ 1 :
        /* code */
        m = 300;
        break;
    case 2 :
        m = 200;
        break;
    case 3 :
        m = 100;
        break;
    default:
        break;
    }

    printf("m : %d\n", m);

    return 0;
}