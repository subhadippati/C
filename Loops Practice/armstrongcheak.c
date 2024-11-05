#include <stdio.h>
int main()
{
    int n;
    printf("Enter number under 500 to cheak armstrong number : ");
    scanf("%d", &n);
    int t=n;
   int sum=0,ld=0;
    for(int i = 1;i<=1000;i++){
      ld=n%10;
      sum=sum+(ld*ld*ld);
     n=n/10;}
     if (sum==t)printf("%d is an armstrong number ",t);
    else printf("%d is not an armstrong number ",t);
 

    return 0;
}