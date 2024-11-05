#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of printing : ");
    scanf("%i", &n);
    
    for ( int i = 1.0; i <= n; i++)
    {
      if(i%2!=0){  printf("%d \n ",i );}
    }

    return 0;
}