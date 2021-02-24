#include <stdio.h> 

// int is all whole number or interge
// double is with 12.5 with a point then the number. 
// float is number with a fraction like 5.4 3.4

int main ()
{ 
    printf("How many dogs do you have?:  ");
    // int double float
    double dogs; // is a correct int because its a whole number

    scanf("%lf", &dogs); 

    printf("%f\n%e\n%g\n", dogs, dogs, dogs);

    return 0;

    /* Conversion Characters
    ---------------------------
    %i - whole number
    %f - Decimal notation
    %e - Scientific notation
    %g - Coputer decides
    < -4
    >  5


*/
} 

