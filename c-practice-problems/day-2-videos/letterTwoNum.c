#include <stdio.h> 

int main ()
{ 
    char ASCII;
    printf("Please enter a character: ");
    scanf("%c", &ASCII);
    printf("%i\n", ASCII);
    // %i changes it to integer
    int integer; 
    printf("Please enter an integer between 0 - 127: ");
    scanf("%i", &integer);
    printf("Here is the Letter %i and here is the number %c\n", integer, integer);


    // Math with ASCII 

    char mathz = 'A' + '\t';
    printf("A(65) + \\t(11) = %c(%d)\n ", mathz, mathz);

    return 0;
}