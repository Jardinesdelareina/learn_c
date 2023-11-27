#include <stdio.h>

int main(void)
{
    int x = 10;
    int* pt_x = &x;

    printf("pt_x: %p\n", pt_x);      // адрес указателя
    printf("*pt_x: %d\n", *pt_x);    // содержимое указателя
    printf("x: %d\n", x);            // значение переменной
    printf("sizeof: %li\n", sizeof(*pt_x));

    puts("<==============>");

    *pt_x = 100;

    printf("pt_x: %p\n", pt_x);      // адрес указателя
    printf("*pt_x: %d\n", *pt_x);    // содержимое указателя
    printf("x: %d\n", x);            // значение переменной

    return 0;
}