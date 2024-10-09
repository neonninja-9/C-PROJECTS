// Write a program using a function which calculates the sum and average of two
// numbers. Use pointers and print the values of sum and average in main().
#include <stdio.h>
float avg(int a, int b){
    return (a + b) / 2.0;
}
int sum(int a, int b){
    return a + b;
}
int main(){
    int a, b;
    printf("Enter the input:");
    scanf("%d", &a);
    printf("Enter the input:");
    scanf("%d", &b);
    printf("the avarage is %f", avg(a, b));
    printf("the sum is %d", sum(a, b));
    return 0;
}