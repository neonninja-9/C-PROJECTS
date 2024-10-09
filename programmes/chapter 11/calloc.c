#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int *ptr = (int *)calloc(n, sizeof(int));
    printf("memory allocatio is completed through calloc\n");
    free(ptr);
    return 0;
}