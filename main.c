#include <stdio.h>
#include <string.h>

enum {name_len=50, b_len=20};

struct name_person {
    char first_name[name_len];
    char last_name[name_len];
};

struct person {
    struct name_person name;
    char sex;
    unsigned short old;
    char date_of_birdth[b_len];
};

int main(void)
{
    struct person blank = {
        {"Andrey", "Kostyuk"},
        'M',
        31,
        "01.01.2023"
    };

    blank.old = 32;
    strcpy(blank.date_of_birdth, "02.01.2023");

    printf(
        "%s %s\n%c\n%d\n%s", 
        blank.name.first_name, 
        blank.name.last_name, 
        blank.sex, 
        blank.old, 
        blank.date_of_birdth
    );
    return 0;
}