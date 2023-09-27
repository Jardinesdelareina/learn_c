#include <stdio.h>
#include <string.h>

int main(void) 
{
    char str_1[12] = "Example";
    char str_2[10] = "Example";

    /* const char *string_1 = str_1;
    const char *string_2 = str_2;

    int count = 0;
    for(; string_1[count] != '\0' && string_2[count] != '\0'; ++count)
        if (string_1[count] != string_2[count]) {
            puts("Strings are not equal");
            return 0;
        }
    if (string_1[count] != string_2[count]) {
        puts("Strings lengths are not equal");
        return 0;
    }

    puts("Strings are equal"); */

    // Сравнение массивов strcmp()
    int result = strcmp(str_1, str_2);
    if (result == 0)
        puts("Strings are equal");
    else
        puts("Strings are not equal");

    return 0;
}