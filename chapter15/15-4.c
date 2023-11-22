#include <stdio.h>

int main(void)
{
    int ary[5];

    printf("    ary의 값 : %lu\t", (unsigned long)ary); // 주소로서의 배열명의 값
    printf("ary의 주소 : %lu\n", (unsigned long)&ary);  // 배열의 주소
    printf("    ary + 1 : %lu\t", (unsigned long)(ary + 1));
    printf("    &ary + 1 : %lu\n", (unsigned long)(&ary + 1));

    return 0;
}