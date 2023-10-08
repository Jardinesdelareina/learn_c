#include <stdio.h>
#include <stdlib.h>

typedef enum 
{
    binance=3000,
    bybit=100,
    huobi=0
} VARIABLE;

int main(void)
{
    VARIABLE balance_bybit = bybit;
    printf("Binance: %d\nBybit: %d\nHuobi: %d\n", binance, bybit, huobi);

    return 0;
}