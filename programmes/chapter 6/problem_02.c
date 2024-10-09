// Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
// a function and print its address. 

#include <stdio.h>
void address_printer(variable){
     printf("the address of the variable(in function) is %u", &variable);
}
int main(){
    int variable;
        printf("Enter the input:");
        scanf("%d", &variable);
        printf("the address of the variable is %u", &variable);
        address_printer(variable);
    return 0;
}
//Are these addresses same? Why?
//no values are different 