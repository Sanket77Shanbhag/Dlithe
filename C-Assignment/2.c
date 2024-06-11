#include <stdio.h>

int main() {
    int gameSize, numGames = 0;

    printf("Welcome to the Game Downloader (Simulation Mode)\n");
    while (1) {
        printf("\nEnter the size of the game (MB) (or 0 to quit): ");
        scanf("%d", &gameSize);

        if (gameSize == 0) {
            break;
        }

        if (gameSize <= 250) {
            printf("Great! This game (%d MB) meets the size requirement.\n", gameSize);
            numGames++;
        } else {
            printf("Sorry, this game (%d MB) exceeds the 250 MB download limit.\n", gameSize);
        }
    }

    if (numGames > 0) {
        printf("\nYou have selected %d game(s) that meet the size requirement.\n", numGames);
    } else {
        printf("\nNo games were selected that meet the size requirement.\n");
    }

    return 0;
}