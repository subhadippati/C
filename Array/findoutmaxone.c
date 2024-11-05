#include <stdio.h>
int main()
{
    int crr[5];
    int max = crr[0];
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter the number %d : ", i + 1);
        scanf("%d", &crr[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        if (max > crr[i])
        {
            max = crr[i];
        }   
    }
    printf("%d", max);
    return 0;
}