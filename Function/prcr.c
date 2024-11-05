#include <stdio.h>
    int combination(int x)
    {
        int factorial = 1;
        for (int i = 2; i <= x; i++)
        {
            factorial = factorial * i;
        }
        return factorial;
    }

int main()
{
    int n;
    printf("Enter number  : ");
    scanf("%i", &n);
    int r;
    printf("Enter number  : ");
    scanf("%i", &r);
    printf("%d", (combination(n)) / (combination(r) * combination(n - r)));
  
    return 0;
}