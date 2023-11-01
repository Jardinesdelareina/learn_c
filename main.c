#include <stdio.h>

int main(void)
{
    int wallet = 0;
    int gold = 10;
    int hp_g = 100;
    int kick = 20;
    char attack;

    printf("Вы атакованы гоблином! Гоблин: %d\n", hp_g);
    attack = getchar();
    while(attack != 'r') {
        if(attack == 'a') {
            puts("Вы атакуете гоблина!");
            hp_g -= kick;
            if(hp_g != 0) printf("Гоблин: %d\n", hp_g);
        }
        if(hp_g <= 0) {
            puts("Вы убили гоблина!");
            printf("Вы получили %d золота\n", gold);
            printf("У вас в кошельке %d золота\n", wallet+=gold);
            break;
        }
        getchar();
        attack = getchar();
    }

    return 0;
}