#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

printf("설정할 시간을 초 단위로 입력하세요: ");
scanf("%d", &seconds);

while(seconds > 0) {
              printf("%d\n", seconds);
              Sleep(1000); 
              seconds--; 
    }
    printf("\a");
    printf("타이머가 종료되었습니다.\n");  

  return 0;
}
