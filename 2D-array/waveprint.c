#include<stdio.h>
int main()
{
    int r, c;
    printf("Enter thr number of the rows : ");
    scanf("%d", &r);
    printf("Enter thr number of the colmn : ");
    scanf("%d", &c);
     int k =c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // wave print ;
   for (int i = 0; i < r; i++)
    {
        
            if(i%2==0){
                for (int j = 0; j < c; j++){
                printf("%d",arr[i][j]);}
            }
            else{ for (int j = c-1; j >= 0; j--){
                 printf("%d",arr[i][j]);}
            }
          
        
       printf("\n");
    }
        return 0;
       }   