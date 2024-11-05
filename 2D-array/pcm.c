#include <stdio.h>
int main()
{
    int r, c;
    printf("Number of the student : ");
    scanf("%d", &r);
    printf("Number of the stubject : ");
    scanf("%d", &c);
    int arr[r][4];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the student roll and pcm marks : %d %d ", i,j);
            scanf("%d", &arr[i][j]);
        }
         
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}