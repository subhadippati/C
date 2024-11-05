#include<stdio.h>
int main() {
printf("Enter the size of the array : ");
int n;
scanf("%d",&n);
int arr[n];
for(int i = 0;i<n;i++){
    scanf("%d",&arr[i]);   
}
for(int i = 0;i<n;i++){
    printf("%d",arr[i]);   
}
// bubleshort alogrithm normal
for(int i = 0;i<n-1;i++){
    for (int j = 0; j < n-1-i; j++)
    {
       if(arr[j]==0){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
       }
    }
    
}
printf("\n");
for(int i = 0;i<n;i++){
    printf("%d ",arr[i]);   
}
return 0;
}