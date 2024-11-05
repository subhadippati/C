// We are finding tripletes equal in this code -- for example arr[5]={1,2,3,4,5}
// and a value x= 6 ; so we have to find a triplates which is equal to 6 here 1+2+3=6
#include <stdio.h>
int main()
{
    int x = 12, arr[8] = {1, 2, 3, 4, 5, 6, 7, 8}, count = 0;
    for (int i = 0; i <= 7; i++)
    {
        for (int j = i + 1; j <= 7; j++)
        {
            for (int k = j + 1; k <= 7; k++)
            {
                if ((arr[i] + arr[j] + arr[k]) == x)
                {
                    count++;
                    printf("(%d %d %d)\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}
