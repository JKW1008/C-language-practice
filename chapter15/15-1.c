#include <stdio.h>

int main(void)
{
    int a = 10; // int형 변수의 선언과 초기화
    int *pi;    // 포인터 선언
    int **ppi;  // 이중 포인터 선언

    pi = &a;    // int형 변수의 주소를 저장할 포인터
    ppi = &pi;  // 포인터의 주소를 저장한 이중 포인터

    printf("----------------------------------\n");
    printf("변수    변숫값  &연산   *연산   **연산\n");
    printf("----------------------------------\n");
    printf("    a%12d%p\n", a, (void*)&a);
    printf(" pi%12p%12p%12d\n", (void*)pi, (void*)&pi, *pi);
    printf("ppi%12p%12p%12p%12d\n", (void*)ppi, (void*)&ppi, (void*)*ppi, **ppi);
    printf("----------------------------------\n");

    return 0;
}
