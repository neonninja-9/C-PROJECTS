// Write a program to change the value of a variable to ten times of its current using call by value

#include <stdio.h>

// Function that attempts to change the value of the variable (but won't affect the original variable)
void multiplyByTen(int num) {
    num = num * 10;
    printf("Value inside the function (call by value): %d\n", num);
}

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    
    // Call the function
    multiplyByTen(x);
    
    // After the function call, the value of x remains the same
    printf("Value in main (after function call): %d\n", x);
    
    return 0;
}
