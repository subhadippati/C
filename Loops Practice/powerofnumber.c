#include <stdio.h>
int main()
{
    int n , m;
    printf("Enter number  : ");
    scanf("%i", &n);
   printf("Enter number  : ");
    scanf("%i", &m);
    int power=1;
    for(int i = 1;i<=m;i++){
    power=power*n;}
    printf("%d",power);

   
    return 0;
}