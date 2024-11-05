#include <stdio.h>
int main()
{
  int a = 5;
  int *n;
  n = &a;
  // printf("%p",n);
  // now lets print the adress of N
  // printf(" \n %p",&n);
  // now for storing the adress of a pointer we use double pointer
  int **m;
  m = &n;
  printf(" \n %p", m);
  /// now from this we can print or use the variable a
  printf(" \n %d", **m);

  return 0;
}

// this is the simple concept of pointer