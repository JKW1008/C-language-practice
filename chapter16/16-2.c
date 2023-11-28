#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pi;    // 동적 할당된 배열을 가리키는 포인터
    int i, sum = 0; // 반복 제어 변수와 누적 변수

    pi = (int *)malloc(5 * sizeof(int));    // 저장 공간 20바이트 할당

    if (pi == NULL) // 메모리 할당 실패 시 예외 처리
    {
        printf("메모리가 부족합니다\n");
        return 1; // 프로그램 종료
    }

    printf("다섯 명의 나이를 입력하세요 : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &pi[i]);
        sum += pi[i];
    }

    printf("다섯 명의 평균 나이 : %.1lf\n", (sum / 5.0));

    // 동적으로 할당한 메모리를 해제
    free(pi);

    return 0;
}
