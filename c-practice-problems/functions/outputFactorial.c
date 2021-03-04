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

void outputFactorial(int input)
{ 
    printf("The Factorial of %d is %d.\n", input, factorial(input));
}


int main()
{ 

outputFactorial(5);
outputFactorial(4);
outputFactorial(8);
outputFactorial(2); 

for (int i = 0; i < 10; i++)
{ 
    outputFactorial(i);
}

    return 0;
}