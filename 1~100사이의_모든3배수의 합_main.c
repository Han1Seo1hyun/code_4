#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int sum = 0; 
  int i;


  for(i = 1; i <= 100; i++) {

        if(i % 3 == 0) {
              sum += i;
        }
  }

  printf("1���� 100������ ��� 3�� ����� ��: %d\n", sum);
  
  return 0;
}
