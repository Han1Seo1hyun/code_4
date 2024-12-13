#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
    char choice;
    int num1, num2;
    int result;

    do {
        // �޴� ���
        printf("**************\n");
        printf("A --- Add\n");
        printf("S --- Subtract\n");
        printf("M --- Multiply\n");
        printf("D --- Divide\n");
        printf("Q --- Quit\n");
        printf("**************\n");
        printf("������ �����Ͻÿ� : ");
        
        // ����ڷκ��� ���� ���� �Է¹ޱ�
        scanf(" %c", &choice);

        switch(choice) {
            case 'A':
            case 'a':
                printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ� : ");
                scanf("%d %d", &num1, &num2);
                result = num1 + num2;
                printf("%d + %d = %d\n", num1, num2, result);
                break;
            case 'S':
            case 's':
                printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ� : ");
                scanf("%d %d", &num1, &num2);
                result = num1 - num2;
                printf("%d - %d = %d\n", num1, num2, result);
                break;
            case 'M':
            case 'm':
                printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ� : ");
                scanf("%d %d", &num1, &num2);
                result = num1 * num2;
                printf("%d * %d = %d\n", num1, num2, result);
                break;
            case 'D':
            case 'd':
                printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ� : ");
                scanf("%d %d", &num1, &num2);
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("%d / %d = %d\n", num1, num2, result);
                } else {
                    printf("0���� ���� �� �����ϴ�.\n");
                }
                break;
            case 'Q':
            case 'q':
                printf("���α׷��� �����մϴ�.\n");
                break;
            default:
                printf("������ �����Ͻÿ� : \n");
                break;
        }
    } while (choice != 'Q' && choice != 'q')

    return 0;
}
