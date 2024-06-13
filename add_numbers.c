/*
Author: Philip Machar
Reg No: BSE-01-0047/2024
Description: A program to calculate the sum of two numbers and display the results.
*/

//importing the standard input/output library
#include <stdio.h>

//This is the main C function where code execution begins 
int main() {
    //variables to contain number 1 and number 2
    int num1 = 10, num2 = 30;

    /*
    adding number 1 to number 2 and storing the 
    result in a variable called sum
    */
    int sum = num1 + num2;

    //displaying the results to the terminal
    printf("The sum of these two numbers is %d", sum);

    //telling the OS that the code was successfully executed
    return 0;
}
