#include <stdio.h> 

int getSumOfRec (int num1, int num2)
{ 
    int sum = (num1 + num1) + (num2 + num2);
    return sum;
}

int main ()
{ 
    int length, width; 

    printf("Enter length of rectangle: "); 
    scanf("%d", &length);

    printf("Enter width of rectangle: ");
    scanf("%d", &width);

    printf("The Length is %d\nThe width is %d\nwhich gives you a perimeter of %d units", length, width, getSumOfRec(length,width));

    return 0;
}