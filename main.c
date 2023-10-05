#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Выделение памяти для переменной */
    char *var_1 = malloc(10);
    int *var_2 = malloc(sizeof(int));
    short *var_3 = malloc(10 * sizeof(short));

    /* Освоождение памяти */
    free(var_1);
    free(var_2);
    free(var_3);

    return 0;
}