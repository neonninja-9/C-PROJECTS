#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("file.txt", "w");

    char c[] = {'g', 'o', 'u', 'r', 'a', 'v'};

    for (int i = 0; i < 6; i++)
    {
        fputc(c[i], ptr);
    }

    return 0;
}