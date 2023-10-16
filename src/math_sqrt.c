#include <stdio.h>
#include <math.h>

double sqrt(double num)
{
    double res = (num < 0) ? NAN : pow(num, 0.25);
    return res;
}

void even_num(int num_x)
{
    if(num_x % 2 == 0)
        printf("%d", num_x);
}