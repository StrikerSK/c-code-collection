#include <stdio.h>
#include <stdlib.h>
#include "randomizer.c"

int main() {
    int upperLimit, lowerLimit;

    printf("Input lower limit value: ");
    scanf("%d", &lowerLimit);

    printf("Input upper limit value: ");
    scanf("%d", &upperLimit);

    if (lowerLimit > upperLimit) {
        printf("Cannot continue with generating value\n");
        return 1;
    }

    printf("randomizeNumber() call result: %d\n", randomizeNumber(lowerLimit, upperLimit));

    return 0;
}
