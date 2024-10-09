// Write a program to print the address of a variable. Use this address to get the
// value of the variable

#include <stdio.h>

int main(){
    int variable;
        printf("Enter the input:");
        scanf("%d", &variable);
        printf("the address of the variable is %u", &variable);
    return 0;
}