#include <stdio.h>

int main(void) {
    double num_1, num_2;
    int input = scanf("%lf %lf", &num_1, &num_2);       // ввод двух чисел

    double result = (num_1 * (num_2 - num_1)) / 2;      // арифметические действия с данными
    double target_num = 10;

    if (result > target_num) {                          // условный оператор
        printf("Result > %f\n", target_num);
        return 0;
    }

    printf("%.2f\n", result);                           // вывод результата
    return 0;
}