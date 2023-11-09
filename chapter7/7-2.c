#include <stdio.h>

int get_num(void);

int main(void)
{
    int result;
    result = get_num();

    printf("반환값 : %d\n", result);

    return 0;
}

int get_num(void)
{
    int num;

    printf("양수 입력 : ");
    scanf("%d", &num);

    //  음수 입력 대응
    while ( num < 0 )
    {
        /* code */
        printf("양수를 입력하세요!\n");
        printf("양수 입력 : ");
        scanf("%d", &num);
    }
    
    return num;
}