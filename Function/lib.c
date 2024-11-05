#include <stdio.h>
#include <math.h>
int power(int n, int m)
{
    int power = 1;
    for (int i = 1; i <= m; i++)
    {
        power = power * n;
    }
    return power;
}
int main()
{
    int n;
    printf("Enter number  : ");
    scanf("%i", &n);

  int root = sqrt(n);
    printf(" The Square root of the number %d \n", root);

    int a;
    printf("Enter number base  : ");
    scanf("%i", &a);
    int b;
    printf("Enter number power : ");
    scanf("%i", &b);
    printf("Answer is %d \n", power(a, b));

    return 0;
}
