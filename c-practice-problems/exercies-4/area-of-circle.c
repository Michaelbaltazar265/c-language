#include <stdio.h> 

int areaOfCircle (int num1)
{ 
    float diameter, circumference, area;
    diameter = 2 * num1; 
    printf("Diameter = %.2f units\n", diameter);

    circumference = 2 * 3.14 * num1;
    printf("Circumference = %.2f units\n", circumference);

    area = 3.14 * num1 * num1;
    printf("Area = %.2f unites\n", area);
    return 0;
}

int main ()
{ 
    int radius; 

    printf("Enter radius: ");
    scanf("%d", &radius);

    areaOfCircle(radius);

    return 0;
}