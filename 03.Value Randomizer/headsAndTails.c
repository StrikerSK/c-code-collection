#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "randomizer.c"

int main() {
    char* gameOptions[] = { "head", "tail" };
    char playerPick[4];

    printf("Head or tail? ");
    scanf("%s", playerPick);

    if (strcmp(toLower(playerPick), gameOptions[randomizeNumber(0,1)]) == 0 ) {
        printf("Player wins! Congratulations!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}
