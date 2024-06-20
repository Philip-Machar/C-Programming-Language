/*
Author: Philip Machar
Reg No: BSE-01-0047/2024
Date: June 20, 2024
Description: A program to calculate the sum and average of ages in an array.
*/

//importing the standard input/output library
#include <stdio.h>

//This is the main C function where code execution begins
int main() {
    
    //Defining the age array
    int age[10] = {17, 63, 34, 52, 78, 90, 7, 22, 49, 71};

    //Declaring the sum and average age variables
    int sum;
    int average_age;
    
    //Looping through the age array to get the sum of all the ages in it
    for(int i = 0; i < 10; i++){
        //Displaying age at each index number to the terminal
        printf("Age[%d] is %d\n", i, age[i]);

        //Calculating the sum of ages
        sum = sum + age[i];
    }
    
    //Calculating the average age
    average_age = sum / 10;
    
    //Displaying the sum of ages and average age to the terminal
    printf("\nThe sum of the ages is %d\n", sum);
    printf("The average age is %d\n", average_age);
    
    //telling the OS that the code was successfully executed
    return 0;
}