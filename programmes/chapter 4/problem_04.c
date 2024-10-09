// Write a program to calculate the factorial of a given number using a for loop.
#include <stdio.h>
int factorial ( int );// function prototype

int factorial ( int num ){
    if (num == 0 || num == 1) {
        return 1;  // Base case: factorial of 0 or 1 is 1
    }
    return  num*factorial(num-1);

}// funtion to find factorial

int main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d" , &num);
    printf("the factorial of %d is :%d",num, factorial(num));

    return 0;
}