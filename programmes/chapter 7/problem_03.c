/*Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the
array*/
#include <stdio.h>

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int *ptr = array;
    for (int i = 0; i < 10; i += 2)
    {
        printf("the value on index %d is %d: \n", i, *ptr);
        ptr += 2;
    }

    return 0;
}