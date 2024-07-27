/*
Author: Philip Machar
Reg No: BSE-01-0047/2024
Date: July 26, 2024
Description: A simple age pointer.
*/

//importing the standard input/output library
#include <stdio.h>

//This is the main C function where code execution begins
int main() {

    //Defining age variable
    int age = 20;

    //create age pointer and assigning age address to it
    int *age_ptr = &age;
    
    //Displaying the value of the address stored in the age pointer
    printf("The value in the pointer is: %d\n: ", *age_ptr);
    
    //Displaying the address stored in the age pointer
    printf("The address stored in the pointer is: %p ", (void *)&age);

    //telling the OS that the code was successfully executed
    return 0;
}
