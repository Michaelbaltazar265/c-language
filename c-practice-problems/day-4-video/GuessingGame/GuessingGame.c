#include <stdio.h> 
#include <stdbool.h> 
#include <stdlib.h>
#include <time.h> 

// The user has to guess a number from 0-5; 
// ouput whether or not the person is correct

int main ()
{ 
    //Generate a random number
    // psuedo ransom number 
    int maxValue = 50;
    srand(time(NULL));
    int randomNum = rand() % maxValue + 1; 

    printf("%d\n",randomNum);
    // modulus operator %

    printf("Guess a number between 0 and %d: ", maxValue);
    int input; 
    scanf("%d", &input);

    if (input == randomNum)
    { 
        printf("You win\n");
    }
    else 
    { 
        printf("You lose!\n");
    }
}