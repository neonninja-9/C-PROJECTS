//  Twenty integers are to be stored in memory. What will you prefer- Array or
// structure?

// storing by array
#include <stdio.h>


int main()
{
    int arr[20];
    int i;
    for (i = 0; i < 20; i++)
    {
        printf("Enter the value of arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 20; i++)
    {
        printf("Value of arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}