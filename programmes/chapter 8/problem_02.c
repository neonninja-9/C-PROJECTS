/*//it will return 1 because ascii value of a comes first in ascii table*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[7];
    char s2[7];
    printf("enter the frist string:\n");
    scanf("%s", s1);

    printf("first string is done\n");
    printf("enter the second string:\n");
    scanf("%s", s2);
    printf("second string is done\n");

    int a = strcmp(s1, s2);
    if (a == 0)
    {
        printf("both are same\n");
    }
    else
    {
        printf("these are different strings\n");
    }
    return 0;
}