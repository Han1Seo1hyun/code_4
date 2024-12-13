#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
    char choice;
    int num1, num2;
    int result;

    do {
        // 메뉴 출력
        printf("**************\n");
        printf("A --- Add\n");
        printf("S --- Subtract\n");
        printf("M --- Multiply\n");
        printf("D --- Divide\n");
        printf("Q --- Quit\n");
        printf("**************\n");
        printf("연산을 선택하시오 : ");
        
        // 사용자로부터 연산 선택 입력받기
        scanf(" %c", &choice);

        switch(choice) {
            case 'A':
            case 'a':
                printf("두수를 공백으로 분리하여 입력하시오 : ");
                scanf("%d %d", &num1, &num2);
                result = num1 + num2;
                printf("%d + %d = %d\n", num1, num2, result);
                break;
            case 'S':
            case 's':
                printf("두수를 공백으로 분리하여 입력하시오 : ");
                scanf("%d %d", &num1, &num2);
                result = num1 - num2;
                printf("%d - %d = %d\n", num1, num2, result);
                break;
            case 'M':
            case 'm':
                printf("두수를 공백으로 분리하여 입력하시오 : ");
                scanf("%d %d", &num1, &num2);
                result = num1 * num2;
                printf("%d * %d = %d\n", num1, num2, result);
                break;
            case 'D':
            case 'd':
                printf("두수를 공백으로 분리하여 입력하시오 : ");
                scanf("%d %d", &num1, &num2);
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("%d / %d = %d\n", num1, num2, result);
                } else {
                    printf("0으로 나눌 수 없습니다.\n");
                }
                break;
            case 'Q':
            case 'q':
                printf("프로그램을 종료합니다.\n");
                break;
            default:
                printf("연산을 선택하시오 : \n");
                break;
        }
    } while (choice != 'Q' && choice != 'q')

    return 0;
}
