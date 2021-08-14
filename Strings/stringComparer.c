#include <stdio.h>

#include "../ReusableCode/stringFunctions.c"

int main() {
    char firstString[20], secondString[20];

    printf("First string: ");
    scanf("%s", firstString);

    printf("Second string: ");
    scanf("%s", secondString);

    printf("Are provided strings insensitively equal?\n %s!\n", compareStringsInsensitive(firstString, secondString) ? "Yes" : "No");

    return 0;
}