#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int digit;
    scanf("%d", &digit);
    
    bool range_nums = digit <= -100 || digit >= 100;
    printf("%d", range_nums);

    return 0;
}