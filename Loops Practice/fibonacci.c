#include <stdio.h>
int main()
{
    int n;
    printf("Enter number  : ");
    scanf("%i", &n);
    int a = 1, b = 1, sum=0;
    for (int i = 1; i <= n; i++)
    {
           
        a = b;
         b = sum;
        sum = a + b;
       
        printf("%d ", sum);
    }
    
        printf(" \nThe %dth term is %d ", n ,sum);

    return 0;
}