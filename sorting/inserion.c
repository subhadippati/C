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
//selection alogrithm 

for(int i = 1;i<=n-1;i++){
 int j = i;
 while (j>=1 && arr[j]<arr[j-1])
 {
   int temp =arr[j];
   arr[j]=arr[j-1];
   arr[j-1]=temp;
   j--;
 }
 
    }

printf("Your sorted array is : ");
for(int i = 0;i<n;i++){
    printf("%d ",arr[i]);   
}

return 0;
}