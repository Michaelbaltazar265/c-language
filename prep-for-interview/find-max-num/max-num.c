#include <stdio.h> 

int max (int num1, int num2){ 
    if (num1 > num2){ 
        printf("%d is greater then %d", num1, num2);
    } else { 
        printf("%d is greater then %d", num2, num1);
    }

    return 0;
}

int main ()
{ 
    int num1, num2;

    int a = 2;
    int b;
    b = a++; /* b is 2, a is 3 */
    printf("b is %d\n", b);

    int c = 4;
    int d;
    d= ++c;
    printf(" d is %d\n", d);

    printf("Enter two different numbers: ");
    scanf("%d %d", &num1, &num2);

    max(num1, num2);
    return 0;
}