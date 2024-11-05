#include<stdio.h>
   int power (int n , int b ){
    if(b==0){
        return 1;
    }
    return n*(power (n,b-1));  
    }
int main() {

        printf("Enter your number");
        int n;
        scanf("%d",&n);
        printf("Enter your number");
        int b;
        scanf("%d",&b);
        printf("%d",power(n,b));
return 0;
}