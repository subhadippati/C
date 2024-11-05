#include<stdio.h>
//ap-4,7...nth term
int main(){
printf("Enter a number : ");
int n ;
scanf("%d",&n);
for (int i=4; i<=1+(3*n);i=i+3){
printf("%d ",i);}
return 0 ;
}