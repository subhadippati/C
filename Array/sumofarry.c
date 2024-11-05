#include<stdio.h>
int main() {

    int arr[5], sum =0;
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter the number %d : \n ", i + 1);
        scanf("%d", &arr[i]);
             sum = sum+arr[i];
    }
    printf("%d",sum);
return 0;
}