#include<stdio.h>
int main() {
    char drr[10];//we have to declare size in case of taking input ;
scanf("%s",drr);//no need of use of & .
printf("%s",drr); // it is printing untill a space so for this we can we another way 
char mrr[10];
gets(mrr); //but it will creatre a waring but we can take entire sentence
puts(mrr);

// so the best way of taking the input in string is 
char nrr[11];
scanf("%[^\n]s",nrr);
puts(nrr);
//-----------------------------------
printf("\n");
//-----------------------------------
//pointer
return 0 ;}


