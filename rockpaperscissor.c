#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displayChoice(int choice) {
    if (choice == 1) printf("Rock");
    else if (choice == 2) printf("Paper");
    else if (choice == 3) printf("Scissors");
}

int main() {
    int userChoice, computerChoice;
    
    // Seed the random number generator
    srand(time(0));
    
    // Get user's choice
    printf("Choose an option:\n1. Rock\n2. Paper\n3. Scissors\nEnter your choice (1, 2, or 3): ");
    scanf("%d", &userChoice);
    
    // Generate computer's choice
    int randomNum = rand() % 101;
    if (randomNum <= 33) computerChoice = 1; // Rock
    else if (randomNum <= 66) computerChoice = 2; // Paper
    else computerChoice = 3; // Scissors

    // Display choices
    printf("You chose: ");
    displayChoice(userChoice);
    printf("\nComputer chose: ");
    displayChoice(computerChoice);
    printf("\n");

    // Determine the winner
    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 1 && computerChoice == 3) || 
               (userChoice == 2 && computerChoice == 1) || 
               (userChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}