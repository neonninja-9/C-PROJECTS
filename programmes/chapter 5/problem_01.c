#include <stdio.h>

// Function prototype
float avg(float, float, float);

// Function definition
float avg(float num1, float num2, float num3) {
    return (num1 + num2 + num3) / 3.0; // Use floating-point division
}

int main() {
    float numbers[3];

    // Taking numbers as input
    for (int i = 0; i < 3; i++) {
        printf("Enter number %d:\n", i + 1);
        scanf("%f", &numbers[i]);
    }

    // Calculate and print average
    printf("Average of three numbers is: %f\n", avg(numbers[0], numbers[1], numbers[2]));

    return 0;
}
