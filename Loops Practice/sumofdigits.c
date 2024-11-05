#include<stdio.h>
int main (){
//sum of a given number
int n;
printf("Enter a number : ");
scanf("%d",&n);
int ld = 0,sum=0;
while(n!=0)
{
    ld=n%10;
    sum=sum+ld;
   n=n/10;

}
printf("%d",sum);
    return 0 ;
}