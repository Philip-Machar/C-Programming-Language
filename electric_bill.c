/*
Author: Philip Machar
Reg No: BSE-01-0047/2024
Date: June 13, 2024
Description: A program to calculate the electric bill based on units consumed.
*/

//importing the standard input/output library
#include <stdio.h>

//This is the main C function where code execution begins 
int main() {

    /*Declaring variables to containe customer name, 
    id, units consumed, chargers per unit and bill*/
    char customer_name[20];
    int customer_id;
    float units_consumed, charges_per_unit, bill;
    
    //Prompting the user to enter name, id and units consumed
    printf("Enter name: ");
    scanf("%19s", customer_name); 
    
    printf("Enter ID: ");
    scanf("%d", &customer_id);
    
    printf("Enter units consumed: ");
    scanf("%f", &units_consumed);
    
    //Checking for the units consumed and calculating the bill
    if (units_consumed >= 1 && units_consumed <= 199) {
        charges_per_unit = 1.20;
        bill = units_consumed * charges_per_unit;
    } else if (units_consumed >= 200 && units_consumed < 400){
        charges_per_unit = 1.50;
        bill = units_consumed * charges_per_unit;
    } else if (units_consumed >= 400 && units_consumed < 600){
        charges_per_unit = 1.80;
        bill = units_consumed * charges_per_unit;
    } else if (units_consumed >= 600){
        charges_per_unit = 2.00;
        bill = units_consumed * charges_per_unit;
    } else {
        charges_per_unit = 0;
        bill = 0;
    }
    
    //Checking if the bill exceeds 400 and add 15% surcharge
    if (bill > 400){
        bill = bill + (bill * 0.15);
    }
    
    //Checking if the bill is 100 and above and deciding whether charge or not
    if (bill >= 100){
        printf("Customer ID: %d\n", customer_id);
        printf("Customer name: %s\n", customer_name); 
        printf("Charges per unit: %.2f\n", charges_per_unit);
        printf("Your bill is Kshs. %.2f\n", bill);
    } else {
        printf("The bill must be more than Kshs. 100 for one to be charged\n");
    }

    //telling the OS that the code was successfully executed
    return 0;
}




