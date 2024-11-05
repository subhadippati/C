#include<stdio.h>
   int power (int n , int b ){
    if(b==0){
        return 1;
    }
    int x = power(n,b/2);
    if (b%2==0){
        return power(n,b/2)*power(n,b/2);
    }
    else{
         return power(n,b/2)*power(n,b/2)*n ;
    }
    }
int main() {

        printf("Enter your Base ");
        int n;
        scanf("%d",&n);
        printf("Enter your Power");
        int b;
        scanf("%d",&b);
        printf("%d",power(n,b));
return 0;
}