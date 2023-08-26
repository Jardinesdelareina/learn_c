#include <stdio.h>

int main(void)
{
    int num = 0;
    int target = 1000;

    while(++num < target)
        printf("%d\n", num);
    return 0;
}