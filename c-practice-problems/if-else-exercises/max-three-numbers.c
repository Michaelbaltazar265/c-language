#include <stdio.h> 

int main ()
{ 
    int num1, num2, num3; 
    printf("Enter 3 different numbers: "); 
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("\n %d , %d , %d", num1, num2, num3);

    if (num1 > num2 && num1 > num3){ 
        printf("\n %d is the greater number out of %d and %d", num1, num2, num3);
    } else if ( num2 > num1 && num2 > num3){ 
        printf("\n %d is the greater number out of %d and %d", num2, num1, num3);
    } else if (num3 > num1 && num3 > num2){ 
        printf("\n %d is the greater number of %d and %d", num3 ,num1, num2);
    } 

    return 0;
}