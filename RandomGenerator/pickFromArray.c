#include <stdio.h>
#include <stdlib.h>

char pickFromArray(char *inputStrings[]) {
    printf("Size of array %d", sizeof(inputStrings));  
    return "Nice";  
}

int main() {
    char strinArray[2][10] = {"rock", "paper"};

    pickFromArray(strinArray);

    return 0;
}