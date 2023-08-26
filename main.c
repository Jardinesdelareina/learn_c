#include <stdio.h>

int main(void)
{
    int num = 100;
    int enter_num;

    do {
        printf("Enter number: ");
        scanf("%d", &enter_num);
    } while (num != enter_num);

    printf("Access input");
    return 0;
}