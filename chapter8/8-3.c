#include <stdio.h>

int main(void)
{
    int score[5];
    int i;
    int total = 0;
    double avg;
    int count;  //  배열 요소의 개수를 저장할 변수

    count = sizeof(score) / sizeof(score[0]);    //  배열 요소의 개수 계산

    for ( i = 0; i < count; i++ )   //  count만큼 반복
    {   
        printf("%d번째 성적을 입력하세요 : ", i + 1);
        scanf("%d", &score[i]);
    }

    for ( i = 0; i < count; i++ )
    {
        total += score[i];
    }
    avg = total / (double)count;    //  총합을 count로 나누어 평균 계산

    for ( i = 0; i < count; i++ )
    {
        printf("%5d", score[i]);
    }
    printf("\n");

    printf("평균 : %.1lf\n", avg);

    return 0;
}