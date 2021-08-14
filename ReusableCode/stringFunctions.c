#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// Formula to lower value of given string 
char* toLowerCase(char* s) {
    for(char *p=s; *p; p++) *p=tolower(*p);
    return s;
}

// Formula to lower value of given string 
char* toUpperCase(char* s) {
    for(char *p=s; *p; p++) *p=toupper(*p);
    return s;
}

// Formula to comapre two strings
bool compareStrings(char *firstString, char *secondString) {
    return strcmp(firstString, secondString) == 0;
}

// Formula to comapre two case insensitive strings
bool compareStringsInsensitive(char *firstString, char *secondString) {
    return compareStrings(toLowerCase(firstString), toLowerCase(secondString));
}