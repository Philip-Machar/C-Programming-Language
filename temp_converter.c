/*
Author: Philip Machar
Reg No: BSE-01-0047/2024
Date: June 27, 2024
Description: A Function to convert temperature in centigrades to fahrenheit.
*/

//importing the standard input/output library
#include <stdio.h>

//Declaring(prototyping) the temp_converter function
float temp_converter(float centigrade);

//This is the main C function where code execution begins
int main() {
    //Declaring the centigrade and fahrenheit variables
    float centigrade, fahrenheit;
    
    //Prompting the user to enter temperature in centigrade
    printf("Enter temperature(centigrade): ");
    scanf("%f", &centigrade);
    
    /*Calling the temp_converter function, 
    passing in the centigrade argument and 
    assigning the return value to the fahrenheit variable*/
    fahrenheit = temp_converter(centigrade);
    
    //Displaying the results to the terminal
    printf("%.2f centigrade is %.2f in fahrenheit", centigrade, fahrenheit);

    //telling the OS that the code was successfully executed
    return 0;
}

//Defining the temp_converter function
float temp_converter(float centigrade){
    //Declaring the fahrenheit variable
    float fahrenheit;

    //Converting temperature in centigrade to fahrenheit
    fahrenheit = ((9.0 / 5.0) * centigrade) + 32;

    //Returning temperature in fahrenheit
    return fahrenheit;
}
