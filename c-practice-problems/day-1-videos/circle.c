#include <stdio.h> 

int main () 
{ 
    int radius; // the distance from outside to center of the circle
    printf("please enter a radius: ");
    scanf("%i", &radius);  // address of operator
    double area = 3.14159 * (radius * radius); 
    // ^ using double becasue its not a whole number.
    printf("The area of a circle with %i radius is %f\n", radius , area); 
    return 0;
}