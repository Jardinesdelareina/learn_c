#include <stdio.h>
#include <stdlib.h>

struct figure {
    double x;
    double y;
};

int main(void)
{
    struct figure *ptr_rectangle = malloc(sizeof(struct figure));

    ptr_rectangle->x = 30;
    ptr_rectangle->y = 40;

    printf("x: %.3f\ny: %.3f", ptr_rectangle->x, ptr_rectangle->y);

    free(ptr_rectangle);
    return 0;
}