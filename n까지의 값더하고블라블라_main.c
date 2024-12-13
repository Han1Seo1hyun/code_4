#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
    int n = 1;  
    int sum = 0;

    while (sum + n <= 10000) {
        sum += n; 
        n++;      
    }

    printf("가장 큰 값: %d\n", sum);
    printf("그때의 n 값: %d\n", n - 1);
  
  return 0;
}
