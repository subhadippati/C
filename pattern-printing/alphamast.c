#include<stdio.h>
int main() {
       int n;
    printf("Enter the number of row: ");
    scanf("%d", &n);
   
    for (int i = 1; i <= n; i++)
    { int a=65;
    char h =(char)a;
          for (int j = 1; j <= n-i; j++){
            printf(" ");

          }
          for (int k = 1; k <= i; k++){
            printf("%c",h);
            h++;

          }
          printf("\n");
    }
return 0;
}