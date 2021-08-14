#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "../ReusableCode/valueGenerator.c"
#include "../ReusableCode/stringFunctions.c"

char gameOptions[3][20] = { "paper", "scissors", "rock" };

struct gameResults {
    int playerWins;
    int computerWins;
    int draws;
};

// Checks if searched values is present in array
bool containsValue(char *searchedValue) {
    for (int i = 0; i < 3; i++) {
        char customValue[strlen(gameOptions[i]) + 1];
        strcpy(customValue, gameOptions[i]);
        if (compareStringsInsensitive(searchedValue, customValue)){
            return true;
        }
    }
    return false;
}

// Check for index of value if present in array
int indexOfValue(char *searchedValue) {
    for (int i = 0; i < 3; i++) {
        char customValue[strlen(gameOptions[i]) + 1];
        strcpy(customValue, gameOptions[i]);
        if (compareStringsInsensitive(searchedValue, customValue)){
            return i;
        }
    }
    return -1;
}

void makeLineBreak() {
    printf("=============================================================\n");
}

int resolveRound(char *userInput, char *compInput) {
    int userPosition = indexOfValue(userInput);
    int compPosition = indexOfValue(compInput);

    // printf("User value [%s] at index: %d\n", userInput, userPosition);
    // printf("Computer value [%s] at index: %d\n", compInput, compPosition);

    if (userPosition == 2 && compPosition == 0) {
        return 1;
    } else if (userPosition == 0 && compPosition == 2) {
        return -1;
    } else if (userPosition < compPosition) {
        return 1;
    } else if (userPosition > compPosition) {
        return -1;
    } else {
        return 0;
    }
}

void playGame(int numberOfRounds, struct gameResults *gameResults) {
    for (int i = 1; i <= numberOfRounds; i++) {
        char userInput[20];
        makeLineBreak();
        printf("Round %d\n", i);
        printf("Pick: rock, paper, scissors! ");
        scanf("%s", userInput);

        if(indexOfValue(userInput) >= 0) {
            printf("\nUser picked: %s!\n", userInput);
            printf("Computer picked: %s!\n", gameOptions[randomizeNumber(0,2)]);
            int whoWon = resolveRound(userInput, gameOptions[randomizeNumber(0,2)]);
            if (whoWon == 1) {
                printf("Round %d won by Computer!\n", i);
                gameResults->computerWins += + 1;
            } else if (whoWon == -1) {
                printf("Round %d won by Player!\n", i);
                gameResults->playerWins += + 1;
            } else {
                printf("Round %d ended with draw!\n", i);
                gameResults->draws += + 1;
            };
        } else {
            printf("User input is not in option: rock, paper or scissors.\n");
            i--;
        }
    }
}

int main() {
    int numberOfRounds;
    struct gameResults gameResults;

    printf("How many rounds you want to play? 3, 5 or 7? ");
    scanf("%d", &numberOfRounds);

    while (numberOfRounds != 3 && numberOfRounds != 5 && numberOfRounds != 7) {
        printf("Invalid number of rounds!");
        printf("Number of rounds should be 3, 5 or 7? ");
        scanf("%d", &numberOfRounds);
    }

    playGame(numberOfRounds, &gameResults);
    makeLineBreak();
    printf("Results of game are:\n");
    printf("Player: %d wins\n", gameResults.playerWins);
    printf("Computer: %d wins\n", gameResults.computerWins);
    printf("%d Draws\n", gameResults.draws);

    return 0;
}