#include<stdio.h>
#include<string.h>
int main() {
 struct pokemon
 {
  int hp ;
  int speed ;
  char str[15];

 };
 struct pokemon pikachu;
 pikachu.hp=56;
 pikachu.speed=89;
strcpy(pikachu.str,"Pikachu");

printf("Name : %s ",pikachu.str);
printf("\nHp : %d ",pikachu.hp);
printf("\nspeed : %d ",pikachu.speed);

 struct pokemon p;
 
scanf( "%s", &p.str);
scanf(" %d ",&p.hp);
scanf(" %d ",&p.speed);


printf("Name : %s ",p.str);
printf("\nHp : %d ",p.hp);
printf("\nspeed : %d ",p.speed);
    
return 0;
}