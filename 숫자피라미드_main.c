#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
    int n;
    int i, j;

    printf("������ �Է��Ͻÿ� : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

  return 0;
}
