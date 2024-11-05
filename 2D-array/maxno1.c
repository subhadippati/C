#include <stdio.h>
#include <limits.h>
int main()
{
    int r, c;
    printf("Enter thr number of the rows : ");
    scanf("%d", &r);
    printf("Enter thr number of the colmn : ");
    scanf("%d", &c);

    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    int max = INT_MIN, b;

    for (int i = 0; i < r; i++)
    {
        int count = 0;
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }

        }
        
            if (max < count)
            {
                max = count;
                b = i;
            }

        printf("\n");
    }
    printf("%d %d", max, b);

    return 0;
}