#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));
    printf("memory allocatio is completed through malloc\n");
    free(ptr);
    return 0;
}