/* Take name and salary of two employees as input from the user and write them to
a text file in the following format:
i. Name1, 3300
ii. Name2, 7700 */
#include <stdio.h>
typedef struct employee
{
    char name[20];
    int salary;
} emp;

int main()
{
    emp e[2];
    for (int i = 0; i < 2; i++)
    {
        printf("enter the name of employee %d\n", i + 1);
        scanf("%s", &e[i].name);
        printf("enter the salary of employee %d\n", i + 1);
        scanf("%d", &e[i].salary);
    }

    // writing in a file
    FILE *fp;
    fp = fopen("employee_data.txt", "w");
    if (fp == NULL)
    {
        printf("Could not open file\n");
    }
    else
    {
        for (int i = 0; i < 2; i++)
        {
            fprintf(fp, "%s, %d\n", e[i].name, e[i].salary);
        }
    }
    return 0;
}