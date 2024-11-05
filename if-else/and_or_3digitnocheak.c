#include <stdio.h>
int main()
{
    printf("Enter a Number  : ");
    int n;
    scanf("%d", &n);
    if (n > 99 && n <= 999)
    {
        printf("%d  is a 3 digit no", n);
    }
    else
    {
        printf("%d is not 3 digit no", n);
    }
    return 0;
}