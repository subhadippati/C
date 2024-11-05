#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; // syntax of arry

    printf("%d \n", arr[0]); // print of an arry with the help of index
    printf("%d \n", arr[4]); //  print of an arry with the help of index

    arr[2] = 50; // we can update value of an arry

    printf("%d \n", arr[2]); // printing updated value

// taking input as arry
    int brr[3];
    scanf("%d", &brr[0]); 
    scanf("%d", &brr[1]); 
    scanf("%d", &brr[2]); 

    printf("%d \n", brr[2]); // ptinting the input of the arry

    // now lets take input of an arry using loop

    int crr[5];
    for (int i = 0; i <=4; i++)
    {
        printf("Enter the number %d", i + 1);
        scanf("%d", &crr[i]);
    }
    // printing the value of arry using loop
    
    for (int i = 0; i <= 4; i++)
    {
        printf(" %d", crr[i]);
    }
    return 0;
}