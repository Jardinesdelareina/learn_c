#include <stdio.h>

int main(void)
{
    int var_int = 10;
    int* pt_int;
    char* pt_char;

    pt_int = &var_int;
    pt_char = (char *)pt_int;           // приведение указателя к типу char

    *pt_char = 1;

    printf("pt_char: %d\n", *pt_char); 
    printf("sizeof pt_char: %ld\n", sizeof(*pt_char));

    return 0;
}