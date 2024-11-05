#include <stdio.h>
int main()
{
    printf("Enter a Number a : ");
    int a;
    scanf("%d", &a);
    printf("Enter a Number b : ");
    int b;
    scanf("%d", &b);
    printf("Enter a Number c : ");
    int c;
    scanf("%d", &c);
    if (a+b>c && b+c>a && c+b>c)
    {
        printf("here triangle can be formed ");
    }

 
   else printf("Triangle cannot be formed");

    return 0;
}