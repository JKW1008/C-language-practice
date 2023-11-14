#include <stdio.h>

int main(void)
{
    int a;
    double b;
    char c;

    printf("16진수 표현\n");
    printf("int형 변수의 주소 : %p\n", &a);
    printf("double형 변수의 주소 : %p\n", &b);
    printf("char형 변수의 주소 : %p\n", &c);
    printf("\n");
    printf("10진수 표현\n");
    printf("int형 변수의 주소 : %lu\n", (unsigned long)&a);
    printf("double형 변수의 주소 : %lu\n", (unsigned long)&b);
    printf("char형 변수의 주소 : %lu\n", (unsigned long)&c);

    return 0;
}