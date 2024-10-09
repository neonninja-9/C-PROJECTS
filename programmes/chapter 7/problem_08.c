/*Write a program containing functions which counts the number of positive integers in an array*/
#include <stdio.h>

int main()
{
    int arr[10];
    int positive_int_count = 0;

    printf("Enter the input for array: {");

    for (int i = 0; i < 10; i++)
    {

        scanf("%d", &arr[i]);
    }
    printf("}");

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
        {
            positive_int_count++;
        }
    }
    printf("there are %d positive integer in array\n", positive_int_count);

    return 0;
}