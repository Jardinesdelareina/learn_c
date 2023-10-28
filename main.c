#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start_time, end_time;
    double total_time;

    start_time = clock();

    for(int i = 0, target = 1000000; i < target; ++i)
        printf("%d\n", i);

    end_time = clock();
    total_time = (double) (end_time - start_time) / CLOCKS_PER_SEC;

    printf("Time: %.2f second\n", total_time);

    return 0;
}