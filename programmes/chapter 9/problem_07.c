#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Define constants for maximum lengths
#define MAX_NAME_LENGTH 20
#define MAX_ACCOUNT_NUMBER 10

// Structure representing a bank account
typedef struct bankAccount
{
    char name[MAX_NAME_LENGTH]; // Customer's name (maximum 19 characters + 1 for null terminator)
    int accountnum; // Customer's account number
     struct
    {
        int day;
        int month;
        int year;
    } dob; // Date of birth of the customer
   

} bankAccount;

// Function to read a string safely using fgets and sscanf
bool readString(char* buffer, int bufferSize, const char* prompt)
{
    printf("%s", prompt);
    char input[bufferSize + 1]; // +1 for newline character
    if (fgets(input, bufferSize + 1, stdin) == NULL)
    {
        printf("Error reading input\n");
        return false;
    }
    // Remove newline character
    input[strcspn(input, "\n")] = 0;
    strncpy(buffer, input, bufferSize);
    return true;
}

// Function to read an integer safely using scanf
bool readInteger(int* value, const char* prompt)
{
    printf("%s", prompt);
    if (scanf("%d", value) != 1)
    {
        printf("Error reading input\n");
        return false;
    }
    return true;
}

// Function to validate date of birth
bool isValidDate(int day, int month, int year)
{
    // Simple date validation (you can add more checks as needed)
    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1900 || year > 2100)
    {
        return false;
    }
    return true;
}

int main()
{
    bankAccount customers[20]; // Array to hold 20 customer details

    for (int i = 0; i < 20; i++)
    {
        printf("Enter the name of customer %d: ", i + 1);
        if (!readString(customers[i].name, MAX_NAME_LENGTH, ""))
        {
            return 1; // Error reading input
        }

        printf("Enter the account number of customer %d: ", i + 1);
        if (!readInteger(&customers[i].accountnum, ""))
        {
            return 1; // Error reading input
        }

        printf("Enter date of birth (DD MM YYYY) of customer %d: ", i + 1);
        if (!readInteger(&customers[i].dob.day, "") ||
            !readInteger(&customers[i].dob.month, "") ||
            !readInteger(&customers[i].dob.year, ""))
        {
            return 1; // Error reading input
        }

        if (!isValidDate(customers[i].dob.day, customers[i].dob.month, customers[i].dob.year))
        {
            printf("Invalid date of birth\n");
            return 1;
        }
    }

    printf("\nCustomer details:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("Customer %d: Name: %s, Account Number: %d, DOB: %02d/%02d/%04d\n",
               i + 1, customers[i].name, customers[i].accountnum,
               customers[i].dob.day, customers[i].dob.month, customers[i].dob.year);
    }

    return 0;
} 