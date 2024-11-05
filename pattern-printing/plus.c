#include <stdio.h>
int main()
{
    int n;
    printf("Enter any odd number  : ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("sorry only odd number allowed");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i == n / 2 + 1 || j == n / 2 + 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}