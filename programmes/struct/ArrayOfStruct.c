#include <stdio.h>
#include <string.h>

typedef struct student
{
    int rollno;
    char name[20]; // No initialization here
    int marks;
} stud;

int main()
{
    stud s[100];
    for (int i = 0; i < 10; i++)
    {
        s[i].rollno = i + 1;
    } // this loop storing roll no of student from 1 to 10

    for (int i = 0; i < 10; i++)
    {
        printf("enter the name of roll no. %d\n", s[i].rollno);
        scanf("%s", s[i].name);
    } // this loop storing name of student from roll no. 1 to 10

    for (int i = 0; i < 10; i++)
    {
        printf("enter the marks of roll no. %d\n", s[i].rollno);
        scanf("%d", s[i].marks);
    } // this loop storing marks of student from roll no. 1 to 10
    printf("roll no name marks\n");

    for (int i = 0; i < 10; i++)
    {

        printf("%d %s %d\n", s[i].rollno, s[i].name, (float)s[i].marks);
    } // this loop printing stored data

    return 0;
}