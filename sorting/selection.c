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
//selection alogrithm optimized
for(int i = 0;i<n-1;i++){
    int min = INT_MAX;
    int index = -1;
    for (int j = i; j<=n-1; j++)
    {   if(min>arr[j]){
         min = arr[j];
        index = j;
    }
        
       }
    //swap 
    int temp=arr[index];
     arr[index]=arr[i];
     arr[i]=temp;
    }

printf("Your sorted array is : ");
for(int i = 0;i<n;i++){
    printf("%d ",arr[i]);   
}

return 0;
}