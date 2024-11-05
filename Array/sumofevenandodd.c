#include <stdio.h>
int main()
{
    int arr[6] = {1, 2 , 4, 4, 5, 6};
    int a=0, b=0;
    for (int i = 0; i <= 5; i++)
    {
        if (i % 2 != 0)
        {
            a=a+arr[i];
        }
        else
        {
         b=b+arr[i];
        }
        }
    printf("%d",a-b);

    return 0;
}