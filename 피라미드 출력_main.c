#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int i, j;
  int n = 5; 

  for(i = 1; i <= n; i++) {
      for(j = 1; j <= n - i; j++) {
          printf(" ");
      }
      for(j = 1; j <= i; j++) {
          printf("*");
      }
      printf("\n");
  }
  
  return 0;
}
