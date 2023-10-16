#include <stdio.h>
#include <assert.h>

float fahr(int cel)
{
    return cel * 1.8 + 32;
}


int main()
{
    int cel;
    float f;

    assert(32 == fahr(0));
    assert(122 == fahr(50));
    assert(-40 == fahr(-40));
    assert(33.8 == fahr(1));

    scanf("%d", &cel);
    printf("%.2f", fahr(cel));
    return 0;
}
