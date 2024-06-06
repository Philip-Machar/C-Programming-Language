//importing the standard input/output library
#include <stdio.h>

//Declaring the price global variable
int price = 10;

//Declaring price function
int price_func(){
    printf("The price is %d\n", price);
    return 0;
}

//This is the main C function where code execution begins
int main(){
    printf("The price is %d\n", price);
    price_func();
    return 0;
}



