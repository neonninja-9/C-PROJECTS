// Quick Quiz: Write a program to accept marks of five students in an array and print them
// on the screen.
#include <stdio.h>

int main()
{
    int mark[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &mark[i]);
    };
    for (int i = 0; i < 5; i++)
    {
        printf("the value on index %d is %d\n", i, mark[i]);
    }

    ;
    return 0;
}