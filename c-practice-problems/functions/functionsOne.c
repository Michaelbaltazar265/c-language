#include <stdio.h> 

int factorial(int number)
{ 
    int factorial = 1;

    for (int i = number; i > 1; i--)
    { 
        factorial *= i; 
    }

    return factorial;
}


int main()
{ 
// creating a function do take a number and multiple each number as it dec.
// examples 5 = 5 * 4 * 3 * 2 * 1
int fact = factorial(5);
int ten = factorial(8);
printf("%d ", fact);
printf("%d ", ten);
printf("%d ", factorial(6));
    return 0;
}