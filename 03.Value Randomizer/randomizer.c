#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>

// General formula for generating random number from given range
int randomizeNumber(int lowerLimit, int upperLimit) {
    srand(time(0));
    return (rand() % (upperLimit - lowerLimit + 1)) + lowerLimit;
}

// Formula to lower value of given string 
char* toLower(char* s) {
    for(char *p=s; *p; p++) *p=tolower(*p);
    return s;
}

// Formula to lower value of given string 
char* toUpper(char* s) {
    for(char *p=s; *p; p++) *p=toupper(*p);
    return s;
}

// Formula to comapre two strings
bool compareStrings(char *firstString, char *secondString) {
    return strcmp(firstString, secondString) == 0;
}

// Formula to comapre two case insensitive strings
bool compareStringsInsensitive(char *firstString, char *secondString) {
    return compareStrings(toLower(firstString), toLower(secondString));
}