//Write a recursive function to calculate the sum of first ‘n’ natural numbers
#include <stdio.h>
int sum_of_num(int);
int sum_of_num(int n)
{
    if(n==0 || n==1){
        return 1;
    }// never forget base case while using recurtion
    int sum = 0;
    sum = n + sum_of_num(n-1);
    return sum;
    
}

int main(){
    int n;
        printf("Enter the input:");
        scanf("%d", &n);
    printf("the sum of first %d natural numbers is :%d\n", n, sum_of_num(n));
    return 0;
}
