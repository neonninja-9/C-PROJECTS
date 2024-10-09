#include <stdio.h>

int main(){
    int a, b, c, d, max;

    // Input four numbers from the user
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    printf("Enter fourth number: ");
    scanf("%d", &d);

    // Use the ternary operator to find the greatest of the four numbers
    max = (a > b) ? a : b;
    max = (max > c) ? max : c;
    max = (max > d) ? max : d;

    // Output the result
    printf("The greatest number is: %d\n", max);

    return 0;
}
