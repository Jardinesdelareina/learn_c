#define LANGUAGE_C

#ifdef LANGUAGE_C
#   include <stdio.h>
#else
#   include "src/printf.h"
#endif

int main(void)
{
    char *var = "Hello LANGUAGE_C";
#ifdef LANGUAGE_C
    printf("%s\n", var);
#else
    printf('Unknown language')
#endif
    return 0;
}