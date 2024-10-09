/*Write a program to modify a file containing an integer to doub its value.*/
#include <stdio.h>
int doub(int);
int doub(int num)
{
    return 2 * num;
}
int main()
{
    FILE *fp = fopen("problem_10file.txt", "r");
    if (fp == NULL)
    {
        printf("couldn't find file");
    }
    else
    {
        int num;
        fscanf(fp, "%d", &num);
        printf("the integer in file is %d\n", num);
        FILE *fp1 = fopen("problem_10file.txt", "w");
        fprintf(fp1, "%d", doub(num));
    }
    return 0;
}