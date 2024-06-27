/*
Author: Philip Machar
Reg No: BSE-01-0047/2024
Date: June 27, 2024
Description: A Function to calculate the volume of a sphere.
*/

//importing the standard input/output library
#include <stdio.h>

//Declaring(prototyping) the sphere function
float sphere(float radius);

//This is the main C function where code execution begins
int main() {
    //Declaring the radius and volume variable
    float radius, volume;

    //Prompting the user to enter the radius of the sphere
    printf("Enter radius of the sphere(cm): ");
    scanf("%f", &radius);
    
    //Calling the sphere fucntion and assigning its return value to the valome variable
    volume = sphere(radius);
    
    //Displaying the results to the terminal
    printf("The volume of the sphere is %.4fcm³", volume);

    //telling the OS that the code was successfully executed
    return 0;
}

//Defining the sphere function
float sphere(float radius){
    //Declaring the volume variable
    float volume;

    //Calculating the volume of the sphere
    volume = (4.0 / 3.0) * (3.141592653589793) * (radius * radius * radius);

    //returning the volume of the sphere
    return volume;
}
