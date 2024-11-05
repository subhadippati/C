#include<stdio.h>
#include<string.h>
   typedef  struct pokemon
 {
  int hp ;   //globalmdeclartion
  int speed ;
  char str[15];

 }pokemon;
int main(){
//    typedef  struct pokemon
//  {
//   int hp ;
//   int speed ;
//   char str[15];

//  }pokemon;

pokemon alpha;
scanf("%d",&alpha.hp);
printf("%d",alpha.hp);

 return 0 ;
}