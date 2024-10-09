/*
Following operations can be performed on a pointer:
1. Addition of a number to a pointer.
2. Subtraction of a number from a pointer.
3. Subtraction of one pointer from another.
4. Comparison of two pointer variables.

Quick Quiz: Try these operations on another variable by creating pointers in a separat program. Demonstrate all the four operations.
*/

#include <stdio.h>

int main()
{
    int nums[] = {22, 23, 24, 25, 26, 27, 28, 29, 30};
    int *ptr = &nums[0];
    for (int i = 0; i < 8; i++)
    {
        printf("the value on index %d is %d \n", i, *ptr);
        ptr++;
    }
    for (int j = 8; j; j--)
    {
        int *ptr = &nums[j];
        if (j == -1)
        {
            break;
        }
        printf("the value on index %d is %d \n", j, *ptr);
        ptr--;
    }

    return 0;
}