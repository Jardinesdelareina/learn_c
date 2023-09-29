#include <stdio.h>
#include <string.h>

int get_p(int width, int height)
{
    int p = 2 * (width + height);
    printf("Perimetr = %d", p);
    return 0;
}


int main(void) 
{
    int num_1 = 30;
    int num_2 = 40;
    get_p(num_1, num_2);
    return 0;
}