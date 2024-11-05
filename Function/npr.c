#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int npr(int n, int m)
{

    return factorial(n) / factorial(n - m);
}

int main()
{
    int n;
    printf("Enter number  : ");
    scanf("%i", &n);

    int m;
    printf("Enter number  : ");
    scanf("%i", &m);

    printf("%d", npr(n, m));

    return 0;
}