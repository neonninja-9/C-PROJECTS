#include <stdio.h>
#include <string.h>

int main()
{
    char str[13] = "gouravsharma ";
    char anotherstr[14];
    // int c = strlen(str);
    // printf("%d\n", c);
    strcpy(anotherstr, str); // put target as first
    printf("%s\n", anotherstr);
    // printf("%s\n", strcat(anotherstr, str)); // string 1 should have enough space to save the concating string
    int e = strcmp("anotherstr", "str");
    printf("%d\n", e); // it will return 1 because ascii value of a comes first in ascii table
    int f = strcmp("str", "anotherstr");
    printf("%d", f); // it will return negetive value because ascii value of s comes first in ascii table
    return 0;
}