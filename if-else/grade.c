#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Enter marks in physics  :\n ");
    printf("Enter marks in chemistry  :\n ");
    printf("Enter marks in maths  : \n");
    printf("Enter marks in biology  :\n ");
    printf("Enter marks in computer  : \n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    float p = (a + b + c + d + e) / 500.00 * 100.00;
    printf("%0.2f", p);
    if (p > 91.0 && p < 100.0)
    {
        printf("Excellent");
    }

    else if (p >= 91.0 && p <= 100.0)
    {
        printf("very good");
    }

    else if (p >= 81.0 && p <= 90.0)
    {
        printf("good");
    }

    else if (p >= 71.0 && p <= 80.0)
    {
        printf("can do better");
    }

    else if (p >= 61.0 && p <= 80.0)
    {
        printf("average");
    }

    else if (p >= 51.0 && p <= 60.0)
    {
        printf("below average");
    }

    else if (p >= 41.0 && p <= 50.0)
    {
        printf("bad");
    }

    else if (p >= 40)
    {
        printf("fail");
    }
    else
    {
        printf("invaild");
    }

    return 0;
}