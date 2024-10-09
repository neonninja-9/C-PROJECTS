#include <stdio.h>

int main()
{
    FILE *ptr1 = fopen("file1.txt", "r"); // pointer pointing to open file
    FILE *ptr2 = fopen("file2.txt", "w"); // pointer pointing to open file
    char c;                               // char to store fgetc output

    while (1)
    {
        c = fgetc(ptr1);
        printf("%c", c); // printing c
        if (c == EOF)
        {
            break;
        }
        else
        {
            fprintf(ptr2, "%c", c);
            fprintf(ptr2, "%c", c);
        }
    }

    return 0;
}