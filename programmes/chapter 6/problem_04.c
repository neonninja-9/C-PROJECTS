//Write a function and pass the value by reference.
#include <stdio.h>

int changer(int* ptr){
    *ptr = 1;
    printf("after passing in function\n");
    return *ptr;
}
int main(){
    int n;
        printf("Enter the input:");
        scanf("%d", &n);
        printf("the value of n is %d\n", changer(&n));

        return 0;
}