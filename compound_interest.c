//importing the standard input/output library
#include <stdio.h>
//importing the math library header file
#include <math.h>

//This is the main C function where code execution begins
int main() {
    
    //Declaring compound interest variables
    float principal, rate, time, compound_interest, amount;
    int n;
    
    //Accepting input from user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter the annual rate(%): ");
    scanf("%f", &rate);
    
    printf("Enter time(years): ");
    scanf("%f", &time);
    
    printf("Enter number of times interest is compounded(/year): ");
    scanf("%d", &n);
    
    //Calculating the total amount
    amount = principal * pow((1 + rate/(n * 100)), (n * time));
    
    //calculating the compound interest
    compound_interest = amount - principal;
    
    //displaying the results
    printf("\nThe compound interest is: %.2f \n", compound_interest);
    printf("The total amount is: %.2f\n", amount);

    return 0;
}
