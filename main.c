#include <stdio.h>

#define MAX_LENGTH 100

int main(void)
{
    char string[] = "Learning C language";

    // Запись данных в файл
    FILE* file_write = fopen("new_file.txt", "w");
    if(file_write) {
        fputs(string, file_write);
        fclose(file_write);
    }

    // Чтение данных из файла
    FILE* file_read = fopen("new_file.txt", "r");
    if(file_read) {
        fgetc(file_read);
        fclose(file_read);
    }

    return 0;
}