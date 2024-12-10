#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void display_choice(int choice) {
    if (choice == 0) {
        printf("Your choice: Rock\n");
        printf("    ___\n");
        printf("---'   __)\n");
        printf("      (___)\n");
        printf("      (___)\n");
        printf("      (__)\n");
        printf("---._(__)\n");
    } else if (choice == 1) {
        printf("Your choice: Paper\n");
        printf("    ___\n");
        printf("---'   __)___\n");
        printf("          ____)\n");
        printf("          ______)\n");
        printf("         ______)\n");
        printf("---.________)\n");
    } else if (choice == 2) {
        printf("Your choice: Scissors\n");
        printf("    ___\n");
        printf("---'   _)____\n");
        printf("          ____)\n");
        printf("       _________)\n");
        printf("      (____)\n");
        printf("---._(____)\n");
    }
}

int main() {
    int userChoice, computerChoice;

    // Initialize random seed
    srand(time(NULL));

    // Ask for user input
    printf("Enter 0 for Rock, 1 for Paper, or 2 for Scissors: ");
    scanf("%d", &userChoice);

    // Ensure input is valid
    if (userChoice < 0 || userChoice > 2) {
        printf("Invalid input\n");
        return 1;
    }

    // Generate random choice for computer (0 for Rock, 1 for Paper, 2 for Scissors)
    computerChoice = rand() % 3;

    // Display user's choice
    display_choice(userChoice);

    // Display computer's choice
    printf("Computer's choice: ");
    display_choice(computerChoice);

    // Determine the winner
    if (userChoice == computerChoice) {
        printf("It's a draw!\n");
    } else if ((userChoice == 0 && computerChoice == 2) || 
               (userChoice == 1 && computerChoice == 0) || 
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }

    return 0;
}