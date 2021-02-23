#include <stdio.h> 

// eggs program dozen 

int main () 
{ 
    printf("the number of eggs for the day: ");

    int eggs; 
    scanf("%i", &eggs);

    double dozen = (double) eggs / 12; 

    printf(" You have %f dozen eggs. \n", dozen);

    return 0;
}