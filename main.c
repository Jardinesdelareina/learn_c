#include <stdio.h>
#include <stdlib.h>

enum cex
{
    binance=3000,
    bybit=100,
    huobi=0
};

int main(void)
{
    printf("Binance: %d\nBybit: %d\nHuobi: %d\n", binance, bybit, huobi);

    // enum выступает как тип переменной
    enum cex enum_balance = binance;
    switch(enum_balance) {
        case binance:
            puts("Binance");
            break;
        case bybit:
            puts("Bybit");
            break;
        case huobi:
            puts("Huobi");
            break;
    }

    return 0;
}