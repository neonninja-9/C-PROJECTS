#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("file.txt", "w");

    int a = 1;
    int b = 2;
    int c = 3;
    fprintf(ptr, "%d %d %d", a, b, c);

    fclose(ptr);
    return 0;
}