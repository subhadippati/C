#include<stdio.h>
int main (){
    int a ;
    printf("Enter a number : ");
    scanf("%d",&a);
    int b ;
    printf("Enter a number : ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;


    printf("%d a  \n",a);
    printf("%d b " ,b);


    return 0;
}