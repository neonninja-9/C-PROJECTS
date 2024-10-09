// Write a function ‘sumVector’ which returns the sum of two vectors passed to it. 
// The vectors must be two–dimensional.


#include <stdio.h>

typedef struct vector
{
    int x, y;
} vec;

void vecsum(vec, vec);//vecsum now take vec datatype not int[] 

void vecsum(vec v1, vec v2)
{
    printf("The sum of the given two vectors is %di + %dj\n", v1.x + v2.x, v1.y + v2.y);
}

int main()
{
    vec v1 = {1, 2};
    vec v2 = {8, 9};
    vecsum(v1, v2);

    return 0;
}