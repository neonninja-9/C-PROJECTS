// Write a program using function to print the following pattern (first lines lines)
// *
// * * *
// * * * * *

#include <stdio.h>
void print_pattern(int lines) {
    // Loop to print lines lines
    for (int i = 1; i <= lines; i++) {
        // Print the required number of stars for the ith line
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n"); // Move to the next line after printing the stars
    }
}
int main(){
    int lines;
        printf("Enter the input:");
        scanf("%d", &lines);
        print_pattern(lines);
    return 0;
}