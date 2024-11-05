#include<stdio.h>
#include<stdbool.h>
int main() {
printf("Enter the size of the array : ");
int n;
scanf("%d",&n);
int arr[n];
for(int i = 0;i<n;i++){
    scanf("%d",&arr[i]);   
}
// bubleshort alogrithm optimized
for(int i = 0;i<n-1;i++){
    bool flag=true;
    for (int j = 0; j < n-1-i; j++) // -i;
    {
       if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
         flag=false;
       }
    }
   if(flag==true){
    break;
   } 
}
printf("Your sorted array is : ");
for(int i = 0;i<n;i++){
    printf("%d ",arr[i]);   
}
return 0;
}