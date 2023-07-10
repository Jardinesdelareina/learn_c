#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
    // устанавливает "зерно" для генератора случайных чисел, используя текущее время в качестве параметра,
    // это служит для того, чтобы каждый раз при запуске программы генерировались разные случайные числа 
    srand(time(NULL));

    int random_num_1 = rand();
    int random_num_2 = rand();
    int sum_random = random_num_1 + random_num_2;

    printf("%d, %d, %d", random_num_1, random_num_2, sum_random);

    return 0;
}