#include <stdio.h>

// Custom strlen function renamed to avoid conflict with standard strlen
int my_strlen(char s[])
{
    int count = 0;
    // Loop through the string until the null terminator is found
    while (s[count] != '\0')
    {
        count++;
    }

    return count;
}

int main()
{
    char s1[] = "gouravsharma";
    // Correct call to the custom my_strlen function
    printf("%d\n", my_strlen(s1));

    return 0;
}
