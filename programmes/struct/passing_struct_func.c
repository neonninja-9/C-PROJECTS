#include <stdio.h>
#include <string.h>

typedef struct student
{
    int rollno;
    char name[20]; // No initialization here
    int marks;
} stud; // we create a stucture format to store data of students simaltaniously we convert it into a data type using typedef keyword

void show(stud);//A structure can be passed to a function just like any other data type.
void show(stud s)
{
    printf("roll no = %d \nname = %s \nmarks = %d\n", s.rollno, s.name, s.marks);
}

int main()
{
    stud student;
    student.rollno = 1;
    printf("enter students name\n");
    scanf("%s", student.name);
    printf("enter students marks\n");
    scanf("%s", student.marks);

    show(student);

    return 0;
}