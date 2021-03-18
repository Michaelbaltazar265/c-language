#include <stdio.h>

int add (int num1, int num2)
{ 
  int  sum = num1 + num2;
    return sum;
}

int subtract (int num1, int num2)
{ 
    int sum = num1 - num2;
    return sum;
}   

int times (int num1, int num2)
{ 
    int sum = num1 * num2;
    return sum;
}

int divide ( int num1, int num2)
{ 
    int sum = num1 / num2; 
    return sum;
}

int main ()
{ 
    int num1, num2; 
    printf("Enter first number: "); 
    scanf("%d", &num1);

    printf("Enter second number: "); 
    scanf("%d", &num2);

    printf("Adding %d + %d gets you %d\n", num1, num2, add(num1, num2));
    printf("Subtract %d - %d gets you %d\n", num1, num2, subtract(num1, num2));
    printf("multiplication %d * %d gets you %d\n", num1, num2, times(num1, num2));
    printf("Divide %d / %d gets you %d\n", num1, num2, divide(num1, num2));

    return 0;
}