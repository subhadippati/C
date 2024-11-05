#include<stdio.h>
#include<strings.h>
int main() {
    char str[50];
    gets(str);

int size = 0;
int i =0;
while(str[i]!=0){
    size++;
    i++;
}
printf("%d \n",size);
for(int i = 0,k=size-1;i<=k;i++,k--){
    char temp = str[i];
    str[i]=str[k];
    str[k]=temp;
}
puts(str);
return 0;
}