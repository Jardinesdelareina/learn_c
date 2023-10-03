#include <stdio.h>

const char* find_space(const char* str)
{
    /* 
        Перебирает посимвольно то, что пришло в аргументах до конца (до симвода \0),
        находит символ пробела и возвращает указатель на него.
    */
    while(*str != '\0') {
        if(*str == ' ')
            return str;
        str++;
    }
}

int main(void)
{
    char string[] = "Learning C";
    const char* res = find_space(string);
    printf("Space address: %p", res);
    return 0;
}
