#include<stdio.h>
int main() {
 int arr[2][2]={1,0,0,1};
 int brr [2][2]={1,0,0,1};
 int result[2][2];
for(int i = 0;i<2;i++){
    for (int j=0;j<2;j++){
        result[i][j]=0;
        for (int k=0;k<2;k++){
result[i][j]+=arr[i][k]*brr[k][j];
        }
    }
}
for(int i = 0;i<2;i++){
    for (int j=0;j<2;j++){
    
printf("%d ",result[i][j]);
        
    }
    printf("\n");
}
return 0;
}
