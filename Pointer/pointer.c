#include<stdio.h>
int main(){
int a=5;
printf("%p \n",&a); // it will print the adress of the variable
int *x;
x=&a;         // it will store the adress of variable in another variable
printf("%p \n \n",x); 

printf("%p \n \n ",&x); // it is showing the adress of the pointer where the adress of the variable is stored

printf("%d \n",*x); //it will print the value of variable whose adress is store in the x

    return 0;
}