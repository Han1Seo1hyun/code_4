#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
    int num;
    int reversed = 0;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &num);

    printf("�Է��� ������ �ݴ�� ���: ");
    do {
        printf("%d", num % 10); 
        num /= 10; 
    } while (num > 0); 

    printf("\n");

    return 0;
}
