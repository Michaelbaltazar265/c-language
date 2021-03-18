#include <stdio.h> 

int main ()
{ 
    int num1, num2, num3, max;

    //  1st number 
    printf("Enter 1st number: ");
    scanf("%d", &num1);

    // 2nd number
    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    // 3nd number
    printf("Enter 3nd number: ");
    scanf("%d", &num3);

    max = (num1 > num2 && num1 > num3) ? num1 : (num2 > num3) ? num2 : num3;
    printf("The max number is : %d", max);
    return 0;
}