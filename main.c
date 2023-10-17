#include <stdio.h>
#include <assert.h>

float fahrenheit(int celsius) {
    return celsius * 1.8 + 32;
}

int main() {
    int celsius;
    float result;

    assert(32 == fahrenheit(0));
    assert(122 == fahrenheit(50));
    assert(-40 == fahrenheit(-40));
    assert(33.8 == fahrenheit(1));

    printf("Enter temperature in Celsius: ");
    scanf("%d", &celsius);

    result = fahrenheit(celsius);
    printf("Temperature in Fahrenheit: %.2f\n", result);

    return 0;
}
