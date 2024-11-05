#include<stdio.h>
#include<limits.h>
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
// selection alogrithm normal
for(int i = 0;i<=1;i++){
     int min = INT_MAX;
     int index = -1;
    for (int j = i; j <n; j++)
    { 
     if(min>arr[j]){
        min=arr[j];
        index=j;
     }
    }
    int temp=arr[index];
     arr[index]=arr[i];
     arr[i]=temp;
}
printf("\n");
for(int i = 0;i<=1;i++){
    printf("\n");
    printf("Minimum %d is : ",i+1); 
    printf("%d ",arr[i]);   
}
return 0;
}