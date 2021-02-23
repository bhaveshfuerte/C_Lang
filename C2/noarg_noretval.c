#include <stdio.h> 
void value(void); 
void main() 
{ 
    value(); 
} 
void value(void) 
{ 
    int year = 0, period = 1, amount = 5000, inrate = 0.12; 
    float sum; 
    sum = amount; 
    while (year <= period) { 
        sum = sum * (1 + inrate); 
        year = year + 1; 
    } 
    printf(" The total amount is %f:", sum); 
    printf(" The total amount is %d:", year); 
    printf(" The total amount is %f:", inrate); 
} 