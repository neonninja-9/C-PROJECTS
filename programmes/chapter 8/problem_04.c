/*Write a function slice() to slice a string. It should change the original string such
that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
for slice.
*/
#include <stdio.h>

char* my_slice(char[], int, int);
char* my_slice(char str[], int m, int n)
{
     if (m < 0 || n > strlen(str) || m > n) {
        return NULL;  // Return NULL if invalid indices
    }else{

    char *ptr1 = &str[m];
    char *ptr2 = '\0';
    str = ptr1;
    return str;
    }
}

int main(){
    char s1[] = "gouravsharma";
    // Correct call to the custom my_strlen function
    printf("%s\n", my_slice(&s1,2, 4));

    return 0;
}