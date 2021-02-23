#include <stdio.h> 

int main () 
{ 
    char name[31];
    printf("Yo gurl enter your name: ");
    scanf("%s", name);
    // "%s is a character aka letters not numbers/integers"

    printf("Hello %s! \n", name);
    printf("you look good %s", name);
    return 0;
}