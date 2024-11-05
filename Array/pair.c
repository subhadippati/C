#include<stdio.h>
int main() {
    int n , m , total;
    printf("Enter the number which you want to compare ");
    scanf("%d",&n);
    printf("Enter the number ");
    scanf("%d",&m);
  int  arr[m];
  for(int i=0;i<m;i++){
    printf("Enter the arry %d",i+1);
    scanf("%d",&arr[i]);
  }
  
    for(int i=0;i<m;i++){
for (int j = i+1; j < m; j++)
{
        if(arr[i]+arr[j]==m){
             total++;
             printf("(\n %d , %d )",arr[i],arr[j]);
        }
}

        }
  printf("\n %d",total);

return 0;
}
