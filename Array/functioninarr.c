#include <stdio.h>
void fun(int x[])
{
    x[0] = 3409;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("%d \n ", arr[0]);
    fun(arr);
    printf("%d", arr[0]);
    return 0;
}