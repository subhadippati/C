#include<stdio.h>
int maze(int n , int m){
    int down= 0;
    int right = 0;

    if(n==1 && m==1){
        return 1;
    }

    if(n==1){
        right+=maze(n,m-1);
    }
      if(m==1){
         down+=maze(n-1,m);    
    }
    if(n>1 && m>1)
    {   right+=maze(n,m-1);
        down+=maze(n-1,m); 
    }
    int totalways = down+right;
    return totalways;
}

int main() {
    int n,m ;
    printf(" Enter The No of Rows : ");
    scanf("%d",&n);
    printf(" Enter The NO of Column : ");
    scanf("%d",&m);

    int totalways = maze(n,m);
    printf("%d",totalways);

return 0;
}