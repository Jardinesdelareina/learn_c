#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // пользовательский ввод заносится в память и выводится адрес 
    // ячейки памяти, где сохранена введенная строка

    // malloc из <stdlib.h> выделяет память под переменную с пользовательским вводом
    // free освобождает память при завершении программы
     
    char string;
    int* x = malloc(sizeof(*x));

    scanf("%c\n", &string);
    *x = string;
    printf("Print: %p\n", (void*)x);

    free(x);
    return 0;
}