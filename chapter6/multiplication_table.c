#include <stdio.h>

int main(void)
{
    int i;
    int j;

    for ( i = 2; i <= 9; i++ )
    {
        for ( j = 0; j <= 9; j ++ )
        {
            printf("%d * %d = %d\n", i, j, i * j);        
        }
    }

    return 0;
}