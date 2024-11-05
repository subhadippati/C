#include<stdio.h>
void pip (int n ,char s , char h , char d ){
    if(n==0){ return ;}   
    pip(n-1,s,d,h);
    printf("%c -> %c\n",s,d);
    pip(n-1,h,s,d);
    return;
}
int main() {
    int n;
    scanf("%d",&n);
    pip(n ,'a','b','c');
return 0;
}