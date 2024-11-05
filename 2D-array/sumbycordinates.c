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
int c1,r1,c2,r2;
    
    printf("Enter thr number of the rows : ");
    scanf("%d %d",&r1,&r2);
    printf("Enter thr number of the colmn : ");
    scanf("%d %d",&c1,&c2);

    for(int i = r1;i<=r2;i++){
        for(int j = c1;j<=c2;j++){
            printf("%d",arr[i][j]);
            sum=sum+arr[i][j];
        }
        printf("\n");
    }
    printf("%d",sum);
return 0;
}