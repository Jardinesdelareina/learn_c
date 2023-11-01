#include <stdio.h>

int main(void)
{
    int gold = 10;
    int hp_g = 100;
    int kick = 30;
    char attack;

    printf("Вы атакованы гоблином! Гоблин: %d\n", hp_g);
    attack = getchar();
    while(attack != 'r') {
        if(attack == 'a') {
            puts("Вы атакуете гоблина!");
        hp_g -= kick;
        printf("Гоблин: %d\n", hp_g);
        }
        if(hp_g < 0) {
            puts("Вы убили гоблина!");
            printf("Вы получили %d золота\n", gold);
            break;
        }
        getchar();
        attack = getchar();
    }

    return 0;
}