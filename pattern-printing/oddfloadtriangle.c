#include <stdio.h>
int main()
{
    printf("Enter thr number of row: ");
    int n;
    scanf("%d", &n);
int a=1;
for(int i = 1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("%d ",a);
       a= a+2;
    }
    printf("\n");
}
    return 0;
}