#include<stdio.h>
int main() {
    int n , m;
    printf("Enter the number ");
    scanf("%d",&n);
    printf("Enter the number ");
    scanf("%d",&m);
  int  arr[m];
  for(int i=0;i<m;i++){
    printf("Enter the arry %d",i+1);
    scanf("%d",&arr[i]);
  }
    for(int i=0;i<m;i++){
        if (arr[i]>m){
    printf(" %d",arr[i]);
        }
  }

return 0;
}