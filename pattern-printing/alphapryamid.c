#include <stdio.h>
int main()
{

    int n;
    printf("Enter the number of row: ");
    scanf("%d", &n);
    int a;
    for (int i = 1; i <= n; i++)
  
    {
          int a=65;
    char ch = (char)a;
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2*i-1; k++)
        {
            printf("%c",a);
                 a++;
        }
   
        
        printf("\n");
    }
        return 0;
    }