#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

printf("������ �ð��� �� ������ �Է��ϼ���: ");
scanf("%d", &seconds);

while(seconds > 0) {
              printf("%d\n", seconds);
              Sleep(1000); 
              seconds--; 
    }
    printf("\a");
    printf("Ÿ�̸Ӱ� ����Ǿ����ϴ�.\n");  

  return 0;
}
