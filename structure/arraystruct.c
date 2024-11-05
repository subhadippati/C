#include <stdio.h>
#include <string.h>
typedef struct pokemon
{

    int hp;
    int speed;
    char name[15];
    char class;
} pokemon;
int main()
{

    pokemon arr[3];

    arr[0].hp = 89;
    strcpy(arr[0].name, "njh");
    arr[0].class = 'y';
    arr[0].speed = 90;

    arr[1].hp = 89;
    strcpy(arr[1].name, "deb");
    arr[1].class = 'e';
    arr[1].speed = 78;

    arr[2].hp = 89;
    strcpy(arr[2].name, "klo");
    arr[2].class = 'm';
    arr[2].speed = 89;
    for (int i = 0; i < 3; i++)
    {
        printf("\n\nclass : %c ", arr[i].class);
        printf("\n name : %s ", arr[i].name);
        printf("\nHp : %d ", arr[i].hp);
        printf("\nspeed : %d ", arr[i].speed);
    }

    pokemon brr[3];
    for (int i = 0; i < 3; i++)
    {      scanf(" %s ", &brr[i].name);
        // printf(" enter class %d ", i + 1);
        scanf(" %c ", &brr[i].class);
        // printf("  enter hp %d", i + 1);
        scanf(" %d ", &brr[i].hp);
        // printf("  enter speed %d ", i + 1);
        scanf("%d ", &brr[i].speed);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\n\nclass : %c ", brr[i].class);
          printf("\n name : %s ", brr[i].name);
        printf("\nHp : %d ", brr[i].hp);
        printf("\nspeed : %d ", brr[i].speed);
    }

    return 0;
}