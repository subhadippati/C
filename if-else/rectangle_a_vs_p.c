#include <stdio.h>
int main(){
printf("Enter the Length of the rectangle : ");
int l ;
scanf("%d",&l);
printf("Enter the breadth of the rectangle  : ");
int b ;
scanf("%d",&b);
int a = l*b;
int p = 2 *(l+b);
if(a>p){
 printf(" Area is greater than perimeter");
    
}    
else if(a==p){
    printf("Both are equal");
}
else{printf(" Perimeter is greater than area" );}

    return 0;

}