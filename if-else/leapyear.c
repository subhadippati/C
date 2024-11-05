#include <stdio.h>
int main(){
printf("Enter the year for cheaking leapyear : ");
int n ;
scanf("%d",&n);
if(n%4==0){
    printf("%d is leapyear",n);
}
else {printf("%d is not  leap year",n);}
    return 0;

}