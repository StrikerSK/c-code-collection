#include <stdio.h>

#include "randomizer.c"

int main() {
    char firstString[20], secondString[20];

    printf("First string: ");
    scanf("%s", firstString);

    printf("Second string: ");
    scanf("%s", secondString);

    printf("Are provided strings insensitively equal? %s!\n", compareStringsInsensitive(firstString, secondString) ? "Yes" : "No");

    return 0;
}