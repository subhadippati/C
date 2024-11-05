#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows");
    scanf("%d", &n);
int sp=n-1;
int st=1;
int ml=n/2+1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <=st; k++)
        {
            printf("*");
        }
        if(i<ml){
        sp--;
        st+=2;}
        else{
            sp++;
            st-=2;
        }

        printf("\n");
    }
    // for (int i = n - 1; i >= 1; i--)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 1; k <= (2 * i - 1); k++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    return 0;
}