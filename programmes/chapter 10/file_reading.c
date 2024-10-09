#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("file.txt", "r");
    if (ptr == NULL)
    {
        printf("file doesn't exist\n");
    }
    else
    {

        int a;
        int b;
        int c;
        fscanf(ptr, "%d %d %d", &a, &b, &c);
        printf("the value of a , b and c is %d , %d and %d\n", a, b, c);
    }
    fclose(ptr);
    return 0;
}