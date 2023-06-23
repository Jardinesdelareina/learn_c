/* Вывод текстового сообщения "Hello World" */

#include <stdio.h>      // включение модуля standard input output, импорт функции printf()

int main(void)
{
    char symbol, *string;

    symbol = 's';           // одинарные кавычки определяют символ
    string = "S";           // двойные кавычки определяют строку

    int size_var = sizeof(symbol);
    printf("Размер переменной: %d байт\n", size_var);
    return 0;
}