/* Вывод текстового сообщения "Hello World" */

#include <stdio.h>      // включение модуля standard input output, импорт функции printf()

int main(void)
{
    char *num_char_string = "Два";
    unsigned char num_char = 2;
    unsigned short num_short = 2;
    unsigned int num_int = 2;
    unsigned long num_long = 2;
    unsigned long long num_long_long = 2;
    float num_float = 2.0;
    double num_double = 2.0;
    long double num_long_double = 2.0;

    printf(
        "char(string): %s\n"
        "char: %hi\n"
        "short: %hi\n"
        "int: %d\n"
        "long: %ld\n"
        "long long: %lld\n"
        "float: %f\n"
        "double: %lf\n"
        "long double: %Lf\n", 
        num_char_string, num_char, num_short, 
        num_int, num_long, num_long_long, 
        num_float, num_double, num_long_double
    );
    return 0;
}