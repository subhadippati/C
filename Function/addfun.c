#include <stdio.h>
int summ (int a , int b){
    return a+b;
}
int main()
{
    int n,m;
    printf("Enter number  : ");
    scanf("%d", &n);
    printf("Enter number  : ");
    scanf("%d", &m);
   

   int sum=summ(n,m);
    printf("%d",sum);

    return 0;
}
