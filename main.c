#include <stdio.h>

int main(void)
{
    int num = 31;
    int *pointer_1;
    char *pointer_2;

    *pointer_1 = &num;
    *pointer_2 = (char *)pointer_1;

    *pointer_2 = 32;
    printf("*pointer_1 = %d, num = %d\n", *pointer_1, num);

    return 0;
}