#include <stdio.h> 

int main (){ 

    int slices = 17; 
    int people = 2; 
    double halfThePizza = (double)( slices / people);  // printing 8.00
    printf("half the pizza is with ( ):%f\n", halfThePizza); // printing 8.5
    double pizza = (double) slices / people; 
    
    printf("half the pizza is without ( ):%f\n", pizza);

    double c = 25 / 2 * 2;
    double d = 25 / 2 * 2.0; 
    printf("c: %f\n", c);
    printf("d: %f\n", d);
    return 0;
}