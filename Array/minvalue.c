#include<stdio.h>
#include<limits.h>
int main() {
    int max =INT_MAX;
    int arr[6]={10,2,-4,-6,7,8};
    for(int i =0 ; i<6;i++){
        if(max>arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);


return 0;
}