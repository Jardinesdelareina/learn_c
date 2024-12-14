#include <stdio.h>

int main(void)
{
    printf("long double: %d", sizeof(long double));
    return 0;
}


// gcc main.c -o main -Wall -Wextra -std=c99 -pedantic