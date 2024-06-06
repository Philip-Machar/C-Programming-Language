//importing the standard input/output library
#include <stdio.h>

//This is the main C function where code execution begins
int main() {

    //Declaring simple interest variables
    float principal, time, rate, simple_interest;
    
    //Prompting the user to enter principal amount
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    //Prompting the user to enter time
    printf("Enter time(in years): ");
    scanf("%f", &time);
    
    //Prompting the user to enter rate
    printf("Enter rate(%): ");
    scanf("%f", &rate);
    
    //Calculating simple interest
    simple_interest = (principal * rate * time) / 100;
    
    //Displaying the results
    printf("\nThe simple interest is: %.2f", simple_interest);

    //telling the OS that the code was successfully executed
    return 0;
}


