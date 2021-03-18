#include <stdio.h> 

int main () 
{ 
    printf("Please input two whole numbers\n");
    int num1, num2;

    // create input of 2 numbers
    printf("Enter first number:  ");
    scanf("%d", &num1);

    printf("Enter second number:  ");
    scanf("%d", &num2);

    if (num1 > num2){ 
        printf("%d is greater then %d", num1, num2);
    } else { 
        printf("%d is greater then %d", num2, num1);
    }
}
