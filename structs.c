/*
Author: Philip Machar
Reg No: BSE-01-0047/2024
Date: July 4, 2024
Description: A structure to hold student details.
*/

//importing the standard input/output library
#include <stdio.h>

//Defining a structure callled Student;
typedef struct {
    char first_name[20];
    char last_name[20];
    char email[30];
    char Reg_No[20];
    char DOB[20];
    int age;
    int phone_number;
} Student;

//This is the main C function where code execution begins
int main() {
    
    //Initializing the Student structure
    Student student = {
        "John",
        "Doe",
        "johndoe@gmail.com",
        "BAF-01-0034/2024",
        "June 3, 1981",
        43,
        0754412365
    };
    
    //Displaying the results to the terminal
    printf("STUDENT DETAILS\n");
    printf("First Name: %s\n", student.first_name);
    printf("Last Name: %s\n", student.last_name);
    printf("Email: %s\n", student.email);
    printf("Reg. Number: %s\n", student.first_name);
    printf("Date of Birth: %s\n", student.first_name);
    printf("Age: %d\n", student.age);
    printf("Phone Number: %d", student.phone_number);

    //telling the OS that the code was successfully executed
    return 0;
}

