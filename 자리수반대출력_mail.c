#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
    int num;
    int reversed = 0;

    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    printf("입력한 정수를 반대로 출력: ");
    do {
        printf("%d", num % 10); 
        num /= 10; 
    } while (num > 0); 

    printf("\n");

    return 0;
}
