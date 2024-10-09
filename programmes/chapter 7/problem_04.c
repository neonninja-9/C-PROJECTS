
/* Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the
array.
*/

#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = &arr[0];

    for (int i = 0; i < 5; i++)
    {
        printf("the pointer is pointing on  element %d\n", *ptr);
        ptr = ptr + 2;
    }

    return 0;
}