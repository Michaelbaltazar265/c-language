#include <stdio.h> 

int main (){ 
    int pizzasToEat = 100; 
    int output = pizzasToEat++;
    printf("Pizzas to eat: %i\n", output); 
    // going to say 100
    return 0;
}