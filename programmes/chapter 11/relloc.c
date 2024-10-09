#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
    }
    else
    {
        printf("Memory allocation is completed through malloc\n");

        // Let's say you want to increase the size of the allocated memory by 5 more integers
        int newSize = n + 5;
        int *newPtr = (int *)realloc(ptr, newSize * sizeof(int));

        if (newPtr == NULL)
        {
            printf("Memory not reallocated.\n");
        }
        else
        {
            printf("Memory reallocation is completed through realloc\n");
            ptr = newPtr; // Update the original pointer to point to the new memory block
        }
    }
    free(ptr);

    return 0;
}