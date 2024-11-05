#include<stdio.h>
#include<string.h>
    typedef struct pokemon
{
int hp ;
int speed;
 char class ;
 char name[7];
}pokemon;

void change (pokemon *ptr , pokemon *x){
(*ptr).hp=78;
ptr->speed=8990;
ptr->class='l'; 
x->hp=90;
strcpy(x->name,"hello");

}

int main() {
pokemon p ;
pokemon x;
p.hp=80;
p.speed=100;
printf("%d hp before",p.hp);
change(&p, &x);
printf("\n%d hp after",p.hp);
printf("\n%d hp after",p.speed);
printf("\n%c hp before",p.class);

printf("\n\n%d hp before",x.hp);
printf("\n\n%s hp before",x.name);
return 0;
}