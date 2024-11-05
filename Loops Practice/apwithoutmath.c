#include <stdio.h>
//ap-4,7...nth term
int main()
{
    int n;
    printf("Enter a number: ");
// print gp 1 2 4 8....
    scanf("%d", &n);
    int a=1;
for(int i=1 ; i<=n; i=i+1){
printf("%d ",a);
a=a*2;
}
    

printf("\n");
printf("\n");


  //  int n;
   // printf("Enter a number: ");
// print gp 3 12 48....
   // scanf("%d", &n);
    int b=3;
for(int i=1 ; i<=n; i=i+1){
printf("%d ",b);
b=b*4;
}
    return 0;
}