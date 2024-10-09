// Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:
//  Income Slab Tax
//  2.5 – 5.0L 5%
//  5.0L - 10.0L 20%
//  Above 10.0L 30%
// Note that there is no tax below 2.5L. Take income amount as an input from the user
#include <stdio.h>

int main(){
    //varialbls declearation
    float income,tax ;

    //taking income as input from user
    printf("enter yor income:\n");
    scanf("%f" , &income);

    // calculating tax
    if(income >= 250000 && income <= 500000){
        tax = (income - 250000) * 5/100;
        printf("you have to pay %f as tax", tax);
    }
    else if (income > 500000 && income <= 1000000){
        tax = (income - 250000) * 20/100 ;
        printf("you have to pay %f as tax", tax);
    }else if (income > 1000000)
    {
        tax = (income - 250000) * 30/100 ;
        printf("you have to pay %f as tax", tax);

    }else
    {
        printf("you have no need to pay tax");
    }
    return 0;
}