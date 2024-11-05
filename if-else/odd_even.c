#include <stdio.h>
int main(){
printf("Enter a Number to cheak odd or even : ");
int n ;
scanf("%d",&n);
if(n==0){printf("Neither odd nor even");}
else{
if(n%2==0){
    printf("%d is an even number",n);
}
else {printf("%d is an odd number",n);}
    return 0;}

}

//coded by spati
