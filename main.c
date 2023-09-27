#include <stdio.h>

#define num_1 3
#define num_2 2

int main(void)
{
    int field[num_1][num_2] = {1, 2, 3, 4, 5, 6};

    for(int h = 0; h < num_1; ++h) {
        for(int v = 0; v < num_2; ++v)
            printf("%d", field[h][v]);
        printf("\n");
    }

    size_t bytes_field = sizeof(field);
    printf("Size array: %d", bytes_field);

    return 0;
}

/* 
Вывод массива будет выглядеть так:
1   2
3   4
5   6
*/