/*Create an array of 5 complex numbers created in Problem 5 and display them
with the help of a display function. The values must be taken as an input from
the user.*/
#include <stdio.h>
typedef struct complexnum
{
    int realpart;
    int imaginarypart;

} com_num;

void display(com_num *);
void display(com_num *ptr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("the complex number is %d + %d i\n", ptr->realpart, ptr->imaginarypart);
        ptr++;
    }
};
int main()
{
    com_num comnum[5];
    com_num *ptr = comnum;
    for (int i = 0; i < 5; i++)
    {
        printf("enter the real part of complex number %d :\n", i + 1);
        scanf("%d", comnum[i].realpart);

        printf("enter the imaginary part of number%d :\n", i + 1);
        scanf("%d", comnum[i].imaginarypart);
        display(ptr);
        ptr++;
    }
    return 0;
}