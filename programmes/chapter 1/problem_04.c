// Write a program to calculate simple interest for a set of values representing
// principal, number of years and rate of interest.
#include <stdio.h>

float simple_intrest(float, float, float);//func prototype
float simple_intrest(float principal, float years, float rate){
    return (principal * years * rate) / 100;
}

int main(){
    float principal, years, rate;
    float interest;
    printf("Enter the principal amount: \n");
    scanf("%f", &principal);
 
    printf("Enter the intrest rate:\n ");
    scanf("%f", &rate);

    printf("for how many years?:\n ");
    scanf("%f", &years);

    printf("the intrest is :%f\n", simple_intrest(principal, years, rate));

    return 0;
}