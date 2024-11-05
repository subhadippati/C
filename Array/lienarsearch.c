#include<stdio.h>
#include<stdbool.h>
int main() {
    //philal ka aukath bala linear search 
 int  arr[7]={1,2,3,4,5,6,7};
 int x = 1 , ind =0;
//so we have find out the number is present in the array or not whith the indexzzzz ;
bool flag = false;
for(int i =0;i<7;i++){
if(arr[i]==x){
    flag=true;
    ind = i;
    break;
}
}
if(flag==true){
    printf("The number x is present and the index is %d ",ind);
}
else{
    printf ("The number is not present ");
}
 
return 0;
}