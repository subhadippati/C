#include<stdio.h>
int main() {
    int r,c;
    printf("Enter thr number of the rows : ");
    scanf("%d",&r);
    printf("Enter thr number of the colmn : ");
    scanf("%d",&c);
    int sum=0 ;
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
            sum=sum+arr[i][j];
        }
    }printf("%d",sum);
return 0;
}