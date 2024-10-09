#include <stdio.h>

int main()
{
    FILE *ptr;                    // file pointer
    ptr = fopen("file.txt", "r"); // pointer pointing to open file
    char c;                       // char to store fgetc output

    while (1)
    {
        c = fgetc(ptr);
        printf("%c", c); // printing c
        if (c == EOF)
        {
            break;
        }
    }

    return 0;
}