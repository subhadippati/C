#include <stdio.h>
int main()
{
    int n;
    printf("Enter number  : ");
    scanf("%i", &n);
    int sum=1;
    for(int i = 1;i<=n;i++){
    sum=sum*i;
        printf(" The factorial of %d is %d \n",i,sum);}
 

    return 0;
}