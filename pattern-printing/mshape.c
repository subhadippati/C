#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
       for (int j=1; j <= n*2+1; j++)
        {
            printf("*");}
                printf("\n");

int b = 1;
    for (int i=0; i <n; i++)
    {
        for (int j=1; j <= n-i; j++)
        {
            printf("*");
        }
        for (int k=1; k <= b; k++)
        {
            printf(" ");
        }
        for (int l=1; l <= n-i; l++)
        {
            printf("*");
        }
        printf("\n");
        b+=2;
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
int c =0;
int d=0;

        for (int i=0; i <=n+1; i++)
    {
        for (int j=1; j <= n-i+1; j++)
        {
            printf("*");
        }
        for (int k=1; k <=i+c; k++)
        {
            printf(" ");
        }
        for (int l=1; l <= n-i+d; l++)
        {
            printf("*");
        }
        printf("\n");
        if(i==0){
            c=0;
            d=1;
        }
        else {
             c++;
             d=1;
        }
      
    }
    

    return 0;
}



