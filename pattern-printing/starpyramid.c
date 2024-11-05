#include <stdio.h>
int main()
{

    int n;
    printf("Enter the number of row: ");
    scanf("%d", &n);
    int a;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }

        // for (int l = 1; l <= i - 1; l++)
        // {
        //     printf("*");
        // }

        printf("\n");
    }
    // for (int i = 1; i <= n; i++){

    //     for (int j = 1; j <= n - 2; j++)
    //     {
    //         printf(" ");
    //     }
    
    //     for (int j = 1; j <= n / 2; j++)
    //     {
    //         printf("|");
    //     }

    //     printf("\n");
    // }
     return 0;
}
// we can use extra variable here .
