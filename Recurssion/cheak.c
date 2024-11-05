#include<stdio.h>
   int power ( int b ){
    int n = 2;
    if(b==0){
        return 1;
    }
    int x = power(b/2);
    if (b%2==0){
        return power(b/2)*power(b/2);
    }
    else{
         return power(b/2)*power(b/2)*n ;
    }
    }
int main() {

        // printf("Enter your Base ");
        // int n;
        // scanf("%d",&n);
        printf("Enter your Power");
        int b;
        scanf("%d",&b);
        printf("%d",power(b));
return 0;
}