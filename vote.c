/*
Author: Philip Machar
Reg No: BSE-01-0047/2024
Date: June 13, 2024
Description: A program to determine whether one is eligible to vote or not.
*/

//importing the standard input/output library
#include <stdio.h>

//This is the main C function where code execution begins 
int main() {
    //Declaring age and citizenship variables
    int age;
    char citizenship;
    
    //Prompting the user to enter age and citizenship
    printf("Please enter age: ");
    scanf("%d", &age);
    
    printf("Are you a kenyan citizen (y/n): ");
    scanf(" %c", &citizenship);
    
    //Checking for age and citizenship and displaying the results in the terminal
    if (age > 18 && citizenship == 'y') {
        printf("\nYou are allowed to vote");
    } else {
        printf("\nYou are not allowed to vote");
    }

    //telling the OS that the code was successfully executed
    return 0;
}
