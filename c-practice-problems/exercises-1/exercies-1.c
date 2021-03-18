#include <stdio.h> 

int main ()
{ 
    // create 3 variables 
    int num1, num2, sum;
    // have the user enter 2 numbers;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("the sum of %d + %d = %d\n", num1, num2, sum);

    return 0;
}