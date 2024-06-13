/*
Author: Philip Machar
Reg No: BSE-01-0047/2024
Description: A program to determine whether one is eligible to take a loan.
*/

//importing the standard input/output library
#include <stdio.h>

//This is the main C function where code execution begins 
int main() {
    //Declaring age and income varaibles
    int age;
    float income;
    
    //Prompting the user to enter age and income
    printf("Please enter age: ");
    scanf("%d", &age);
    
    printf("Please enter income: ");
    scanf("%f", &income);
    
    //Checking for age and income and displaying the results in the terminal
    if (age >= 21 && income >= 21000){
        printf("\nCongratulations, you are eligible to take a loan");
    } else {
        printf("\nUnfortunately, you are not eligibel to take a loan");
    }

    //telling the OS that the code was successfully executed
    return 0;
}
