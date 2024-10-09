#include <stdio.h>

// Function prototype
void array_reverser(int *, int);

// Function to reverse the array
void array_reverser(int *ptr, int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        // Swap elements at position i and (n - i - 1)
        temp = ptr[i];
        ptr[i] = ptr[n - i - 1];
        ptr[n - i - 1] = temp;
    }
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;

    printf("Original Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Call the function to reverse the array
    array_reverser(arr, n);

    printf("\nReversed Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
