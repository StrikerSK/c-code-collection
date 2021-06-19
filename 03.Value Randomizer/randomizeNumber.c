#include <stdio.h>
#include <stdlib.h>

// General formula for generating random number
int randomizeNumber(int lowerLimit, int upperLimit) {
    return rand() % (upperLimit - lowerLimit + 1) + lowerLimit;
}

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
