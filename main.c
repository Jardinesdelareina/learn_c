#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int num;
    if (scanf("%d", &num) != 1) {
        printf("Error");
        return 0;
    }
    if (num > 1) {
        if (num % 2 == 0) printf("Even");
        else printf("Not even");
    }
    else printf("Input number: %d", num);
    return 0;
}