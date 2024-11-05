#include<stdio.h>
void pip (int n ){
    if(n==0){
        return ;
    }
    printf("%d pre\n" , n);
    pip(n-1);
    printf("%d in\n" , n);
    pip(n-1);
    printf("%d post\n" , n);
    return;
}
int main() {
    int n;
    scanf("%d",&n);
    pip(n);
return 0;
}