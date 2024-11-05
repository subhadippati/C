#include <stdio.h>
int main(){
printf("Enter the cost price : ");
int n ;
scanf("%d",&n);
printf("Enter the selling price  : ");
int m ;
scanf("%d",&m);
if(m>n){
 printf(" Here is a profit of ruppes %d ",m-n);
    
}    
else if(n==m){
    printf("No profit no loss");
}
else{printf(" Here is a profit of ruppes %d ",n-m);}

    return 0;

}
