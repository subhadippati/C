#include<stdio.h>
int main() {
  //insilatition of 2D array;
  int arr[2][3]={{1,2,3},{1,2,3}}; // way 1
  int brr[2][3]={4,5,6,1,2,3}; //way 2 

  //print - we can print 2D array using nested loop
  for(int i=0;i<2;i++){
    for (int j=0;j<3;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
  }

  // scanf - simillary we can take input

  int crr[2][3]; //insilating the dabba

  for(int i=0;i<2;i++){
    for (int j=0;j<3;j++){
        printf("Enter the array {%d %d} ",i,j);
        scanf("%d",&crr[i][j]);
    }
  }
//printing the taken input 
    for(int i=0;i<2;i++){
    for (int j=0;j<3;j++){
        printf("%d ",crr[i][j]);
    }
    printf("\n");
  }

  //interseting things if we arr[][3]={1,2,3,4,5,6} - it will be automatically adjust.
return 0;
}