#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a =0;
    for (int i = 2;i<=n-1;i++){
        if(n%i==0){
             a = 1; 
             break;
        }
      
    }
    if(a==1){
        printf("The number is composite");
    }
     if(a==0){
        printf("The number is prime");
    }
   
return 0;
}