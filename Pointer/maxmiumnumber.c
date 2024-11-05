#include <stdio.h>
int max(int *a, int *b);

int main()
{
    int a, b;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Enter a number : ");
    scanf("%d", &b);
    max(&a, &b);
    return 0;
}
int max(int *a, int *b)
{
    int x = *a;
    int y = *b;
    if (x == y)
    {
        printf("Both are equal ");
    }
    else
    {
        if (x > y)
        {
            printf(" %d  is greater than %d",x,y );
        }
        else
        {
            printf("%d is greater than %d",x,y);
        }
        return 0 ;
    }
}