#include <stdio.h>
#include <string.h>
typedef struct cricter
{
    char name[20];
    int age;
    float average_run;

} cricter;

int main(){
printf("Enter your cricter name , age , average run");
cricter arr[2];
for (int  i = 0; i < 2; i++)
{
    scanf("%s",arr[i].name);
    scanf("%d",&arr[i].age);
    scanf("%f",&arr[i].average_run);
}
for (int  i = 0; i < 2; i++)
{
    printf("\n \n Name : %s",arr[i].name);
    printf("\n age : %d",arr[i].age);
    printf("\n average run : %f",arr[i].average_run);
}


    return 0;
}