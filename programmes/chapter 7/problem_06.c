/*Write a program to create an array of 10 integers and store multiplication table of
5 in it.*/
#include <stdio.h>

int main()
{
    int arr[10];
    int n;
    printf("Enter the input:");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        int table = n * (i + 1);
        arr[i] = table;
    };
    printf("the multiplication of 5 is:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", n, i + 1, arr[i]);
    }

    return 0;
}