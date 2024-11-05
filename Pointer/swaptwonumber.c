#include <stdio.h>
void swapp (int* a,int* b ){
   int c = *a;
 *a=*b;
 *b=c;
 return ;
}

int main()
{
    int a=3, b=7;
    //printf("Enter a number : ");
    //scanf("%d", &a);
    //printf("Enter a number : ");
   // scanf("%d", &b);
    //int* x= &a; int* y= &b;
    swapp(&a , &b);

    printf("%d a ", a);

    printf("%d b ", b);

    return 0;
}