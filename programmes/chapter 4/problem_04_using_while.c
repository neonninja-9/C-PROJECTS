// Write a program to calculate the factorial of a given number using a while loop.
#include <stdio.h>
int factorial ( int );// function prototype

int factorial ( int num ){
    if (num == 0 || num == 1){
        return 1;
    }else{
    int i = 1;
   while(i<num){
    int factorial *= i;
    i++;
    return factorial;
   }
   }
}// funtion to find factorial

int main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d" , &num);
    printf("the factorial of %d is :%d",num, factorial(num));

    return 0;
}