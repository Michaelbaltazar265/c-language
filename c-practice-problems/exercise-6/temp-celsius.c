#include <stdio.h> 


int main ()
{ 
    float fahrenheit, celsius;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    printf("The temperature in Celsius is %.2f \n Fahrenheit is %.2f F\n", celsius, fahrenheit);
    
    return 0;
}