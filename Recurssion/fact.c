#include<stdio.h>
int fact(int a){
    if(a==0 || a==1) return 1;
    return a*fact(a-1);
}

    int main (){
        int a ;
        printf("Enter a number");
        scanf("%d",&a);
        printf("%d",fact(a));

    
return 0;
}