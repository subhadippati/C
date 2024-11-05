#include<stdio.h>
  typedef struct pokemon
    { char str[15];
      int speed;
      int hp;
     
    }pokemon;
int main() {
  typedef struct superpokemon
    { 
   int superspeed;
    pokemon p ;
     
    }superpokemon;

superpokemon a;
a.p.hp=67;
printf("%d",a.p.hp);
    
return 0;
}