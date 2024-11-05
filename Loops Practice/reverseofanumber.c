#include<stdio.h>
int main (){
//sum of a given number
int n;
printf("Enter a number : ");
scanf("%d",&n);
int ld = 0,sum=0,r=0;
while(n!=0)
{
    ld=n%10;
    sum=(sum*10)+ld;
    n=n/10;

   // r=r+(n%10);
    //r=r*10;
    //n=n/10;

}
printf("%d",sum);
//printf("%d",r);
    return 0 ;
}