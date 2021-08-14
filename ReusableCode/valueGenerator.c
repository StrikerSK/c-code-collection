#include <stdlib.h>
#include <time.h>

// General formula for generating random number from given range
int randomizeNumber(int lowerLimit, int upperLimit) {
    srand(time(0));
    return (rand() % (upperLimit - lowerLimit + 1)) + lowerLimit;
}