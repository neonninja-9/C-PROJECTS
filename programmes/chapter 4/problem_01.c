#include <stdio.h>
// Write a program to print multiplication table of 10 in reversed order.
int main(){
    //taking number 
    int number;
    printf("enter your number:\n");
    scanf("%d" , &number);
    //printing reversed table 
    printf("the reversed  table of given number is : \n");
    for(int i = 10; i ; i--){
      
        printf("%d x %d = %d \n", number , i , number*i);
    }

    
    return 0;
}