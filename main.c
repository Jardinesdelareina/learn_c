#include <stdio.h>

typedef enum {
    union_none,
    union_char,
    union_int,
    union_double
} TYPE_VAR;

union var_item {
    char var_char;
    int var_int;
    double var_double;
};

typedef struct {
    union var_item var;
    TYPE_VAR type;
} VAR;

void (show_var(VAR v))
{
    switch(v.type) {
        case union_char:
            printf("var_char: %c\n", v.var.var_char);
            break;
        case union_int:
            printf("var_int: %d\n", v.var.var_int);
            break;
        case union_double:
            printf("var_double: %.2f\n", v.var.var_double);
            break;
        case union_none:
            puts("Undefined type");
    }
}

int main(void)
{
    VAR var;
    var.var.var_char = 'C';
    var.type = union_char;

    show_var(var);
    return 0;
}