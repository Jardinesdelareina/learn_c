#include <stdio.h>

int main(void)
{
    char symbol;
    if (scanf("%c", &symbol) != 1) {
        printf("Error");
    }

    // break - выход из цикла switch case, 
    // return 0 - выход из программы
    switch(symbol) {
        case 'a':
        case 'A':
            printf("Symbol A\n");
            break;
        case 'b':
        case 'B':
            printf("Symbol B\n");
            break;
        default:
            printf("Any symbol\n");
    }

    return 0;
}