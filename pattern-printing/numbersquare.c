#include<stdio.h>
int main() {
    int a,b;
 printf("Enter the number of rows") ;
 scanf("%d",&a);  
for(int i =1;i<=a;i++){
    for(int j=1;j<=a;j++){
        printf("%d",i);
    }
    printf("\n");
}
return 0;
}