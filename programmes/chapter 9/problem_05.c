// Write a program with a structure representing a complex number.
#include <stdio.h>
typedef struct complexnum
{
    int realpart;
    int imaginarypart;

} com_num;
int main()
{
    com_num comnum1;
    printf("enter the real part of complex number :\n");
    scanf("%d", &comnum1.realpart);
    printf("enter the imaginary part of number :\n");
    scanf("%d", &comnum1.imaginarypart);
    printf("the complex number is %d + %d i\n", comnum1.realpart, comnum1.imaginarypart);

    return 0;
}