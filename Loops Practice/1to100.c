#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of printing : ");
    scanf("%i", &n);
    
    for ( float i = 1.0; i <= n; i++)
    {
        printf("%f \n ",i );
    }

    return 0;
}