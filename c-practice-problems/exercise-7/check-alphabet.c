#include <stdio.h> 

int main ()
{ 
    char letter;
    printf("Enter any letter from the alphabet: ");
    scanf("%c", &letter);

    (letter>='a' && letter<='z') || (letter>='A' && letter<='Z') 
        ? printf("It is ALPHABET")
        : printf("It is NOT ALPHABET");

    return 0;
}