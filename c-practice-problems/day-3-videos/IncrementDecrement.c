#include <stdio.h> 

int main (){ 
    int pizzasToEat = 100; 
    printf("pizzasToEat nothing : %i\n", pizzasToEat); // print 100
    pizzasToEat += 100; 
    printf("pizzasToEat += : %i\n", pizzasToEat); // print 200
    pizzasToEat -= 100; 
    printf("pizzasToEat -= : %i\n", pizzasToEat); // print 100
    pizzasToEat *= 2; 
    printf("pizzasToEat *= : %i\n", pizzasToEat); // print 200
    pizzasToEat /= 4; 
    printf("pizzasToEat /= : %i\n", pizzasToEat); // print 50
    pizzasToEat %= 5; 
    printf("pizzasToEat = : %i\n", pizzasToEat); // print 0
    return 0;
}