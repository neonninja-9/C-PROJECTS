// Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there
// are three subjects and take the marks as input from the user.
#include <stdio.h>

int main(){
    //declearation
    int marks[3];//array for store marks
    float total = 0.0, percentage = 0.0;
    char passOrFail;

    // marks as input from the use
    printf("Enter marks for three subjects:\n");
    for (int i = 0; i < 3; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
        }
    
    //percentage calculation
    percentage = (total / 300) * 100;

    //pass & fail check
    if (percentage >= 40 && marks[0] >= 33 && marks[1]>= 33 && marks[2] >= 33) {
        passOrFail = 'P';
        printf("Student has passed.\n");
        }
        else {
            passOrFail = 'F';
            printf("Student has failed.\n");
            }
                
    return 0;
}
