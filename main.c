#include <stdio.h>

void get_pointers(int* one, int* two)
{
    int three = *one;
    *one = *two;
    *two = three;
}

int main(void)
{
    int num_1 = 1, num_2 = 2;
    get_pointers(&num_1, & num_2);
    printf("num_1 = %d\nnum_2 = %d", num_1, num_2);
    return 0;
}