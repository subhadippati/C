#include <stdio.h>
int main()
{
    int n;
    printf("Enter number  : ");
    scanf("%i", &n);
int sum = 0, i ;
while( i<=n){
if(i%2==0){sum=sum-i;}
else {sum=sum+i;}
i++;
}
printf("%d",sum);
    return 0;
}