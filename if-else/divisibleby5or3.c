#include <stdio.h>
int main(){
printf("Enter a Number  : ");
int n ;
scanf("%d",&n);
if(n%3==0 || n%5==0){
   printf("%d  is divisible by 5 or 3",n);
    
}
else{printf("%d is not divisible by 5 or 3",n);}
return 0;
}