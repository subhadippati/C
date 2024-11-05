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
        for (int k = 1; k <= i; k++)
        {
            printf("%d",k);
        }

        for (int l = i-1; l > 0; l--)
        {
            printf("%d",l);
        }

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