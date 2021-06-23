#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "randomizer.c"

int main() {
    char gameOptions[2][10] = { "head", "tail" };
    char playerPick[4];

    printf("Head or tail? ");
    scanf("%s", playerPick);

    if (compareStringsInsensitive(playerPick, gameOptions[randomizeNumber(0,1)])){
        printf("Player wins! Congratulations!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}
