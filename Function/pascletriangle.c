#include <stdio.h>
int fact(int x)
{
    int factorial = 1;
    for (int i = 2; i <= x; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int ncr(int m, int j)
{

    return fact(m) / (fact(j) * fact(m - j));
}

int main()
{
    int n;
    printf("Enter number  : ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int jcr = ncr(i, j);
            printf("%d ", jcr);
        }
        printf("\n");
    }

    return 0;
}