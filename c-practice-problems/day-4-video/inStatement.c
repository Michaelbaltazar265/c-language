#include <stdio.h> 
#include <stdbool.h> 

int main () { 
    
    bool pizzaIsHealthy;
    int temp;
    printf("Do you believe in the power of pizza? 1 is true or 0 is fales: "); 
    scanf("%d", &temp);
    pizzaIsHealthy = temp;
    if (pizzaIsHealthy) 
    { 
        printf("Welcome to my pizza App!\n");
    } 
    else 
    { 
        printf("you cant enter. \n");
    } 

}