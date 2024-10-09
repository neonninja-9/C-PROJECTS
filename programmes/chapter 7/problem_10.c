/*. Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively.*/
#include <stdio.h>

int main()
{
    int arr[3][10]; // array of 3 rows and 10 column
    int mul[3];

    printf("type 3 numbers of which table you want to printf: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &mul[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("the table of %d\n", mul[i]);
        for (int j = 0; j < 10; j++)
        {

            printf("%d\n", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}