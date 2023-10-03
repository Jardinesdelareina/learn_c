#include <stdio.h>

int sum_array(const int*array, int length)
{
    /* Перебирает элементы области памяти и вычисляет их сумму */
    int result = 0;
    for(int el = 0; el < length; ++el)
        result += array[el];
    return result;
}

int main(void)
{
    int any_array[] = {4, 3, 55, -6};

    // Расчет количества элементов в области памяти
    int count_element = sizeof(any_array) / sizeof(*any_array);
    int value = sum_array(any_array, count_element);

    printf("Sum array: %d", value);
    return 0;
}
