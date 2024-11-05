#include<stdio.h>
   void decreaing(int a){
    if (a==0) return ;
    // printf("\n%d",a);
    decreaing(a-1);
    printf("\n%d",a);
    
      return ;
   }

int main() {
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    decreaing(a);
return 0;
}