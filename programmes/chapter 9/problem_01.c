// Create a two-dimensional vector using structures in C
#include <stdio.h>
typedef struct vector
{
    int x, y;
} vec;
int main()
{
    vec v1 = {1, 2};
    printf("the value of vector is %di + %dj\n", v1.x, v1.y);

    return 0;
}