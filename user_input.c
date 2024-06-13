/*
Author: Philip Machar
Reg No: BSE-01-0047/2024
Date: June 13, 2024
Description: Practising how to take user input using scanf function.
*/

//importing the standard input/output library
#include <stdio.h>

//This is the main C function where code execution begins 
int main(){
    /*
    Declaring variables to contain a student's id,
    total score, grade and fee balance. 
    */
    int id_num;
    float total_score;
    char grade;
    double fee_balance;
    
    //prompting the user to enter id number
    printf("Enter your id number: ");
    scanf("%d", &id_num);

    //prompting the user to enter total score
    printf("Enter your total score: ");
    scanf("%f", &total_score);
    
    //prompting the user to enter grade
    printf("Enter your grade: ");
    scanf(" %c", &grade);

    //prompting the user to enter fee balance
    printf("Enter fee balance: ");
    scanf("%lf", &fee_balance);

    //Displaying the results in the terminal
    printf("\nYour id number is: %d \n", id_num);
    printf("Your total score is: %f \n", total_score);
    printf("Your grade is: %c \n", grade);
    printf("Your fee balance is: %lf \n", fee_balance);

    //telling the OS that the code was successfully executed
    return 0;
}

