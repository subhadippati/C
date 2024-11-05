#include<stdio.h>
int main() {
 int arr[4][2]={1,75,2,56,3,67,4,89};
   for(int i=0;i<4;i++){
    for (int j=0;j<2;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
  }


return 0;
}