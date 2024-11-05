#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of printing : ");
    scanf("%i", &n);
    
    for ( int i = 1.0; i <= 10; i++)
    {
       printf("%d * %d = %d\n ",n,i,i*n );
    }

    return 0;
}