#include<stdio.h>
#include<limits.h>

int main() {
  int arr[7] ={1,2,3,4,4,5,5},max=INT_MIN,smax=INT_MIN ;
  for(int i=0;i<=6;i++){
    if(max<arr[i]){
        smax=max;
        max=arr[i];
    }
      else if(smax<arr[i] && arr[i]!=max){
        smax=arr[i];

    }

  }
  
//     for(int i=0;i<=6;i++){
//     if(smax<arr[i] && arr[i]!=max){
//         smax=arr[i];
//     }
//   }
//   printf("%d \n",max);
  printf("%d",smax);
return 0;
}