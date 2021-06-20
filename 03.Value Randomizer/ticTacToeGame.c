#include <stdio.h>

int main() {
    int numberOfRounds;
    char* gameOptions[] = { "rock", "paper", "scissors" };

    printf("How many rounds you want to play? 3, 5 or 7? ");
    scanf("%d", &numberOfRounds);

    for (int i = 1; i <= numberOfRounds; i++) {
        char userInput[20];
        printf("Round %d, pick your number!\n", i);
        scanf("%s", userInput);
        printf("For round %d user picked %s!\n", i, userInput);
    }

    return 0;
}