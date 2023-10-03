#include <stdio.h>

int square(int w, int h)
{
    return w * h;
}

int main(void)
{
    /* Указатель на функцию: Тип (указатель) (типы аргументов функции) */
    int (*ptr) (int, int);
    ptr = square;
    int result = ptr(10, 12);
    printf("Square: %d", result);
    return 0;
}
