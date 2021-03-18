#include <stdio.h> 

int main ()
{ 
    int num, even; 
    printf("Enter number: ");
    scanf("%d", &num);

    even = (num%2 == 0) ? printf("Number is even") : printf("Number is odd");
    return 0;
}