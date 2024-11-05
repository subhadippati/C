#include<stdio.h>
#include<limits.h>
int main() {
    int r,c;
    printf("Enter thr number of the rows : ");
    scanf("%d",&r);
    printf("Enter thr number of the colmn : ");
    scanf("%d",&c);
    int max= INT_MIN;
    int a=0,b=0;
    int arr[r][c];
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
       scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
       printf("%d",arr[i][j]);
        }
        printf("\n");
    }

    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
        if( max<arr[i][j]){
            max=arr[i][j];
            a=i;b=j;

           
        }
        }
    }printf("%d {%d %d }",max,a,b);
return 0;
}