#include <stdio.h>

int main() {
    int a = 10;        // обычная переменная
    int *p = &a;      // указатель p указывает на a

    printf("Value a: %d\n", a);         // Выводит 10
    printf("Address a: %p\n", (void*)&a);    // Выводит адрес переменной a
    printf("Value p (address a): %p\n", (void*)p); // Выводит адрес a
    printf("Value - address p: %d\n", *p); // Выводит 10

    *p = 20; // Изменяем значение a через указатель p
    printf("New value a: %d\n", a); // Выводит 20

    return 0;
}

/* 
Value a: 10
Address a: 0062ff18
Value p (address a): 0062ff18
Value - address p: 10
New value a: 20
*/


// gcc pointers.c -o pointers -Wall -Wextra -std=c99 -pedantic