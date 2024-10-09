#include <stdio.h>
// Write a program to sum first ten natural numbers using while loop.
// Write this same prog. using ‘for’ and ‘do-while’ loop.



int main(){
    int sum1 = 0, i = 0;


    // using while loop
    while( i < 11){
        sum1 += i;
        i++ ;
    }
    printf("the sum of first natural numbers are:%d\n ", sum1);

    //using for loop
    int sum2 = 0;
    for(int j = 0 ; j <= 10 ; j++){
        sum2 += j;
    }
    printf("the sum of first natural numbers are:%d\n ", sum2);

    //using do while loo3
    int sum3 = 0 , k = 0;
    do{
        sum3 += k;
        k++;
    }while(k < 11);
    printf("the sum of first natural numbers are:%d\n ", sum3);

    
    return 0;
}

