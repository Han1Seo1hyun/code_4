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

    printf("���� ū ��: %d\n", sum);
    printf("�׶��� n ��: %d\n", n - 1);
  
  return 0;
}
