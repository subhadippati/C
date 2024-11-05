#include <stdio.h>
typedef struct date
{
    int day;
    int month;
    int year;
} date;

int main()
{
    date a;
    a.day = 14;
    a.month = 03;
    a.year = 2006;

    date b;
    b.day = 14;
    b.month = 04;
    b.year = 2006;
    int flag = 1;
    if (a.day != b.day)
    {
        flag = 0;
    }

    if (a.month != b.month)
    {
        flag = 0;
    }

    if (a.year != b.year)
    {
        flag = 0;
    }

    if (flag ==1){
        printf("Equal");
    }
    else{
        printf("not equal");
    }

    return 0;
}