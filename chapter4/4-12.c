#include <stdio.h>

int main(void)
{
    int a = 10, b = 20, res;

    res = (a > b) ? a : b;
    //  a가 b보다 크다면 a를 res에 저장
    //  a가 b보다 작다면 b를 res에 저장

    printf("큰 값 : %d\n", res);

    return 0;
}