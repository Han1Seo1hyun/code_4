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

  printf("1부터 100사이의 모든 3의 배수의 합: %d\n", sum);
  
  return 0;
}
