#include<stdio.h>
int fibo (int n ){
    if(n<=2){
        return 1;
    }

    return fibo(n-1)+fibo(n-2);
}
int main() {
    printf("Enter The Number ");
    int n ;
    scanf("%d",&n);
    // int x = fibo(n);
    printf("%d",fibo(n));
return 0;
}