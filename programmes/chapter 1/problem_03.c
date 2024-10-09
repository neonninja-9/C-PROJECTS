// Write a program to convert Celsius (Centigrade degrees temperature to
// Fahrenheit).
#include <stdio.h>

int main(){
    float Celsius,Fahrenheit;
    printf("Enter temperature in Celsius: \n");
    scanf("%f",&Celsius);
    Fahrenheit = (9*Celsius)/5 + 32;
    printf("Temperature in Fahrenheit = %.2f\n",Fahrenheit);
    return 0;
}