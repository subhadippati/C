#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    for (int i = a; i <= b; i++)
        
    {
        int a = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                a = 0;
               break;
            }
            
            
        }
         if (a == 1)
            printf("%d ", i);
       
        
             
    }
    return 0;
}

