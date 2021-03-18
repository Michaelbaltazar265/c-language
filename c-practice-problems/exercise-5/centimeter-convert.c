#include <stdio.h> 

int main ()
{ 
    float cent, meter, kilo;

    printf("Enter length in centimeter: ");
    scanf("%f", &cent);

    meter = cent / 100.0;
    kilo = cent / 100000.0;

    printf("Length in meter is: %.2f m \n", meter);
    printf("Length in Kilometer is: %.2f km\n", kilo);
    return 0;
}