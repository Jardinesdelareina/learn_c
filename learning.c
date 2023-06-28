#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool view_1 = 100;      // ненулевое значение - true
    bool view_2 = 0;        // нулевое значение - false

    printf("View_1: %d\nView_2: %d", view_1, view_2);

    return 0;
}