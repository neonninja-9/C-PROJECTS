#include <stdio.h>

// Seed value, you can change it to any value
unsigned long seed = 1;

// Custom random function using Linear Congruential Generator (LCG)
int my_random() {
    seed = (seed * 1103515245 + 12345) % 2147483648;  // LCG formula
    return seed % 3;  // Returns a value between 0 and 2
}

// Function to get user's choice
int get_user_choice() {
    int choice;
    printf("Write:\n0 for Snake\n1 for Gun\n2 for Water\nEnter your choice: ");
    scanf("%d", &choice);
    
    while (choice < 0 || choice > 2) {  // Validate input
        printf("Invalid choice. Please try again.\n");
        printf("0 for Snake, 1 for Gun, 2 for Water\nEnter again: ");
        scanf("%d", &choice);
    }
    
    return choice;
}

// Function to determine the winner
void determine_winner(int userinput, int computer) {
    const char *choices[] = {"Snake", "Gun", "Water"};  // String representation of choices
    printf("You chose %s, Computer chose %s.\n", choices[userinput], choices[computer]);

    if (userinput == computer) {
        printf("It's a draw!\n");
    } else if ((userinput == 0 && computer == 2) ||  // Snake beats Water
               (userinput == 1 && computer == 0) ||  // Gun beats Snake
               (userinput == 2 && computer == 1)) {  // Water beats Gun
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}

int main() {
    int userinput = get_user_choice();  // Get user's choice
    int computer = my_random();         // Get computer's random choice

    determine_winner(userinput, computer);  // Determine and print the winner

    return 0;
}
