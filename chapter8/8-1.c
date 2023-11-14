#include <stdio.h>

int main(void)
{
    int ary[5];
    //  int형 요소 5개의 배열 선언

    ary[0] = 10;
    ary[1] = 20;
    ary[2] = ary[0] + ary[1];
    scanf("%d", &ary[3]);

    printf("%d\n", ary[2]);
    printf("%d\n", ary[3]);
    printf("%d\n", ary[4]);

    return 0;
}