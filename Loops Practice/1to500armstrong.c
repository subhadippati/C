#include <stdio.h>
int main()
{
int i,n,num,r;
printf("Enter a number ; ");
scanf("%d",&num);

    for(int i = 1;i<=num;i++){
    int   sum=0;
      //n=i;
      for(n=i;n!=0;n=n/10){
      //while(n!=0){
        r=n%10;
        sum=sum+(r*r*r);
       // n=n/10;
      }
     
if(i==sum)printf("%d ",sum);
    }

    return 0;
}