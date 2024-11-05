#include<stdio.h>
int maze(int sr, int sc, int er , int ec ){
    int right = 0;
    int left = 0 ;
    if(sr==er && sc==ec)return 1 ;
    if(sr==er){
        right+=maze( sr,  sc+1,  er , ec );
    }
    if(sc==ec){
        left+=maze( sr+1,  sc,  er , ec );
    }
    if(sr<er && sc<ec){
             right+=maze( sr,  sc+1,  er , ec );
            left+=maze( sr+1,  sc,  er , ec );
         
    }
    int total =right + left;
    return total;
}
int main() {
 
    printf("Enter the number of ROW ");
       int r ;
    scanf("%d",&r);
 
     printf("Enter the number of column ");
        int c ;
     scanf("%d",&c);
     int totalways=maze(1,1,r,c);
     printf("%d",totalways);
return 0;
}