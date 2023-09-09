#include <stdio.h>

int main(void)
{
    int num = 31;
    int *pointer_1, *pointer_2;

    pointer_1 = &num;
    pointer_2 = pointer_1;

    printf("*pointer_2 = %d, num = %d\n", *pointer_2, num);

    *pointer_1 = 32;

    printf("*pointer_2 = %d, num = %d\n", *pointer_2, num);

    return 0;
}