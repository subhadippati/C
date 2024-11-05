#include <stdio.h>
#include <string.h>
typedef struct student
{
    char name[20];
    int roll;
    char deparment[20];

} student;

void branch_cheak(student a, student b)
{
    if (a.deparment == b.deparment)
    {
        printf("not equal");
    }
    else
    {
        printf("not equal");
    }
  
}

int main()
{
    printf("Enter your cricter name , Roll, Branch \n ");

    student a;

    scanf("%s", a.name);
    scanf("%d", &a.roll);
    scanf("%s", a.deparment);

    student b;

    scanf("%s", b.name);
    scanf("%d", &b.roll);
    scanf("%s", b.deparment);

    branch_cheak(a,b);

    return 0;
}