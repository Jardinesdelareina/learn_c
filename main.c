#include <stdio.h>
#include <string.h>

int main(void) 
{
    char string_1[100] = "Copying array";
    char string_2[10];

    // Копирование массива strcpy() и strncpy()
    
    //strcpy(string_2, string_1);
    //puts(string_2);

    int max_lenth = sizeof(string_2) - 1;
    strncpy(string_2, string_1, max_lenth);
    string_2[max_lenth] = '\0';
    //puts(string_2);

    // Измерение размера массива strlen()
    size_t len = strlen(string_2);
    //printf("%d", len);

    // Соединение строк strcat()
    char name[50] = "Andrey";
    char last_name[50] = "Kostyuk";
    strcat(name, last_name);
    puts(name);

    return 0;
}