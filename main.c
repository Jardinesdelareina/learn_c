#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Для переопределения макроса нельзя написать новое значение в следующей строке, нужно отменить определение 
с помощью #undef и задать новое значение */

#define RANDOM_NUM_FROM_TIME time(NULL)         // определение макроса

#undef RANDOM_NUM_FROM_TIME                     // отмена определения макроса

#define RANDOM_NUM_FROM_TIME time(NULL) % 10    // повторное определение макроса

int main(void) 
{
    // устанавливает "зерно" для генератора случайных чисел, используя текущее время в качестве параметра,
    // это служит для того, чтобы каждый раз при запуске программы генерировались разные случайные числа 
    srand(RANDOM_NUM_FROM_TIME);

    int random_num_1 = rand();
    int random_num_2 = rand();
    int sum_random = random_num_1 + random_num_2;

    printf("%d, %d, %d", random_num_1, random_num_2, sum_random);

    return 0;
}