#include <stdio.h>

int main(void)
{
    int x = 6678;
    char* ptr_x = (char *)&x;

    for(int i = 0; i < sizeof(x); ++i)
        printf("| %d |", *ptr_x++);
    return 0;
}