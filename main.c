#include <stdio.h>

int main(void)
{
    int num = 31;               // Создание переменной
    int *pointer_num = &num;    // Инициализация указателя на эту переменную

    printf("pointer_num: %p\n*pointer_num: %d\nnum: %d\n", pointer_num, *pointer_num, num);

    *pointer_num = 41;          // Занесение в ячейку памяти нового значения

    printf("pointer_num: %p\n*pointer_num: %d\nnum: %d\n", pointer_num, *pointer_num, num);
    
    /* 
    Значение в ячейке памяти поменялось, но сама ячейка памяти pointer_num (указатель на адрес num)
    осталась неизменной 
    */
    return 0;
}