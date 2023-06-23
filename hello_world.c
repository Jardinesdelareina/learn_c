#include <stdio.h>

int main(void)
{
    int value = getchar();                      // функция ввода
    int result = putchar(value);                // функция вывода
    printf("\nSymbol code: %d\n", result);
    return 0;
}