#include<stdio.h>
int main (){
int n;
printf("Enter a number : ");
scanf("%d",&n);
int temp=n;
int r=0;
for(int ld=0; n!=0; n=n/10){
    r=(r*10)+(n%10);


}

printf("%d",r+temp);







    return 0;
}