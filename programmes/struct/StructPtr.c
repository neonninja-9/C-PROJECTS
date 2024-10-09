#include <stdio.h>
#include <string.h>

typedef struct student
{
    int rollno;
    char name[20]; // No initialization here
    float marks;
} stud; // we create a stucture format to store data of students simaltaniously we convert it into a data type using typedef keyword

int main()
{
    stud s[10];    // using stud data type we created before we created a array s who can store data of 10 students
    stud *ptr = s; // here we initialise a pointer who pointin 1st element of array s
    char *student_names[] = {"Aarav Patel", "Riya Sharma", "Karan Singh", "Nisha Verma", "Ishaan Gupta",
                             "Priya Mehta", "Arjun Desai", "Sanya Bansal", "Rohan Joshi", "Sneha Iyer"};
    // here we stored names of 10 students using char array pointer

    // Copy names into the struct array
    for (int i = 0; i < 10; i++)
    {
        strcpy(s[i].name, student_names[i]); // it's strcpy not strcyp remember it
    }

    // Print names using the pointer
    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", ptr->name); // here we used ARROW OPERATOR
        ptr++;
    }

    return 0;
}
