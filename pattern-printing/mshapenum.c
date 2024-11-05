#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int a = 65;
    for (int j = 1; j <= n * 2 - 1; j++)
    {
        char ch = (char)a;
        printf("%c", a);
        a++;
    }
    printf("\n");

    int b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int a = 65;
        char ch = (char)a;
        for (int j = 1; j <= n - 1 - i; j++)
        {
            printf("%c", a);
            a++;
        }
        for (int k = 1; k <= b; k++)
        {
            printf(" ");
            a++;
        }
        for (int l = 1; l <= n - 1 - i; l++)
        {
            printf("%c", a);
            a++;
        }
        printf("\n");
        b += 2;
    }
    return 0;
}