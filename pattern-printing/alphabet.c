#include<stdio.h>
int main() {
    int n ;
 printf("Enter a number : ") ;
 scanf("%d",&n);
 for(int i = 1;i<=n;i++){
    int a=65;
    for(int j=1;j<=n;j++){

        char ch = (char)a;
        printf("%c ",a);
      a++;
    }
    printf("\n");
 }
return 0;
}