#include<stdio.h>
int main() {
    int n , m,oddt=0,event=0;
    printf("Enter the number ");
    scanf("%d",&m);
  int  arr[m];
  for(int i=0;i<m;i++){
    printf("Enter the arry %d",i+1);
    scanf("%d",&arr[i]);
  }
    for(int i=0;i<m;i++){
        if (arr[i]%2==0){
event+=arr[i];
        }
        else{
oddt+=arr[i];
        }
  }
  printf("%d",oddt-event);

return 0;
}
