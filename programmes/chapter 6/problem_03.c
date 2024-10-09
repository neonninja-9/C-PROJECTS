// Write a program to change the value of a variable to ten times of its current
// value.

#include <stdio.h>
int value_changer(int*);
int value_changer(int* b){
    *b *= 10;
    printf("i am a functon and i changed the value of a into %d", *b);

}
int main(){
    int a ;
        printf("Enter the input:");
        scanf("%d", &a );
        printf("the currunt value of a is %d", a);
        value_changer(&a);//call by referance
        printf("a = %d", a);
    return 0;
}