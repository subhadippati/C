#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter thr number of the rows : ");
    scanf("%d", &r);
    printf("Enter thr number of the colmn : ");
    scanf("%d", &c);

    int arr[r][c];
    int crr[c][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
         crr[i][j]=arr[j][i];
        }
    
    }
      for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
         printf("%d",crr[i][j]);
        }
        printf("\n");
    
    }

    return 0;
}