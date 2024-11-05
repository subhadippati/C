#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    
            int min=0;
    for (int i = 1; i <= 2 * n - 1; i++)
    {

        for (int j = 1; j <= n*2-1; j++)
        {
            int a = i;
            if (i > n)
            {
                a = n * 2 - i;
            }
        
            int b = j;
            if (j > n)
            {
                b = n * 2 - j;
            }
            
            if (a < b)
            {
                min = a;
            }
            else{
                min=b;
            }
        
            printf("%d", n+1-min);
        }
        printf("\n");
    }
    return 0;
}