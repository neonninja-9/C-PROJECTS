//Write a function to convert Celsius temperature into Fahrenheit.
#include <stdio.h>

// creating a function 
float Celsius2fahrenheit(float temp){
    return ( 9.0*temp ) / 5.0 + 32.0;
 }
int main(){
    //deleaing variables
    float temp;

    // taking input
    printf("Enter the value of temprature in celcius:");
    scanf("%f", &temp);

    //printing result
    printf("tempreture in Fahrenheit is: %.2f\n", Celsius2fahrenheit(temp));

    //end/code
    return 0;
}