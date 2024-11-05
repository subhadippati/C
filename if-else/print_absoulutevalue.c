#include <stdio.h>
int main(){
printf("Enter a Number to find absoulute value : ");
int n ;
scanf("%d",&n);
if(n<0){
    n=n*(-1);
    
}
printf( "The absoulute value is %d",n);
    return 0;

}