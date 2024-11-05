#include<stdio.h>
int main (){
int a,b,c;
printf("Enter age of  a ");
scanf("%d",&a);
printf("Enter age of b ");
scanf("%d",&b);
printf("Enter age of c ");
scanf("%d",&c);

    if (a <= b )
    {
        if (a <= c )
        {
            printf(" a is the youngest ");
        }
              else {   printf(" c is the youngest ");} 
    }
    else
    {
        if (b < c)
        {
            printf("  b is the yougest ");
        }
        else {   printf(" c is the youngest ");}
    }

    return 0;
}