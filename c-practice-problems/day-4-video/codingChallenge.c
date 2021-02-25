#include <stdio.h>  
#include <math.h>

// // Create a program that takes two doubles as inputs, 
// calculates the hypotenuse of a right triangle and outputs 
// it 

int main () { 

    double a;
    double b; 

    printf("This app will calculate the right triangle.\n");

    printf("Enter the first value: "); 
    scanf("%lf", &a); 

    printf("Enter the second value: "); 
    scanf("%lf", &b);

    double c = sqrt((a * a) + (b * b));

    printf("The hypoteneose is %f\n", c);

    return 0;

}