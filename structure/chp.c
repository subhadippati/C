#include<stdio.h>
int main() {
int a=0;int count = 0;
int p,c,m;
scanf("%d",&p);
scanf("%d",&c);
scanf("%d",&m);
int b=1;
if (p>=90){
b=0;
}
if (c>=90){
b=0;
}
if (m>=90){
b=0;
}
if (b==1){
a=a+1;
}

printf("%d",a);
return 0;
}
