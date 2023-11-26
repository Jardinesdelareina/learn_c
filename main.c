#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* x = malloc(4);
    *x = 42;
    printf("%d\n", *x);
    return 0;
}