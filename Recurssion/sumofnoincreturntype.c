#include<stdio.h>
   int sum (int n){
        if(n==1 || n==0){
           return 1;
        }
        return n+(sum(n-1));
    }
int main() {

    printf("Enter your number");
     int n;
     scanf("%d",&n);
     printf("%d",sum(n));
return 0;
}