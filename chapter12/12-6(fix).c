#include <stdio.h>
#include <string.h>  // Include the header for strlen

int main(void)
{
    int age;            // 나이를 저장할 변수
    char name[20];      // 이름을 저장할 배열

    printf("나이 입력: ");
    scanf("%d", &age);  // scanf 함수로 나이 입력

    // Clear the input buffer to prevent issues with fgets
    while (getchar() != '\n');

    printf("이름 입력: ");
    fgets(name, sizeof(name), stdin);  // fgets 함수로 이름 입력

    // Remove the newline character from the end of the name
    if (name[strlen(name) - 1] == '\n') {
        name[strlen(name) - 1] = '\0';
    }

    printf("나이: %d, 이름: %s\n", age, name);

    return 0;
}
