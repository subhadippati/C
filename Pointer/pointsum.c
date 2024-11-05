#include <stdio.h>

int add(int *a, int *b);
int product(int *a, int *b);
int average(int *a, int *b);

int main()
{
    int a, b;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Enter a number : ");
    scanf("%d", &b);
    printf("%d sum of two number ", add(&a, &b));
    printf(" \n %d product of two number ", product(&a, &b));
    printf(" \n %d sum of two number ", average(&a, &b));
    return 0;
}
int add(int* a, int* b)
{ return *a + *b;}
int product(int *a, int *b)
{    return *a * *b;}
int average(int *a, int *b)
{   return (*a + *b) / 2;}