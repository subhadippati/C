#include <stdio.h>
int main()
{
    printf("Enter a Number a : ");
    int a;
    scanf("%d", &a);
    printf("Enter a Number b : ");
    int b;
    scanf("%d", &b);
    printf("Enter a Number c : ");
    int c;
    scanf("%d", &c);
    printf("Enter a Number d : ");
    int d;
    scanf("%d", &d);
    /*  if (a > b && a > c && a>d)
      {
          printf("%d  is greatest", a);
      }
      else if (b > a && b > c && b>d)
      {
          printf("%d  is greatest", b);
      }
      else if (c > a && c > b && c>d)
      {
          printf("%d  is greatest", c);
      }

    else if (d > a && d > b && d>c)
      {
          printf("%d  is greatest", d);
      }

      else
      {
          printf("all are equal ");
      }*/
    int e, f;
    if (a == b && c == d)
    {
        printf("all are equal which is %d ", a);
    }
    else
    {

        if (a > d || a == d)
        {
            e = a;
        }
        else
        {
            e = d;
        }

        if (b > c || b == c)
        {
            f = b;
        }

        else
        {
            f = c;
        }

        if (e > f)
        {
            printf("%d is the greatest ", e);
        }
        else if (e == f)
        {
            printf("%d is the greatest ", f);
        }

        else
        {
            printf("%d is the greatest", f);
        }
    }
    return 0;
}
