#include <stdio.h>
#include <string.h>

int main(void)
{
    char nickname[8];

    puts("What is your name?\n");
    scanf("%s", nickname);
    printf("Your name is %s!\n", nickname);
    return 0;
}