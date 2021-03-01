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
    else if (input > randomNum)
    { 
        printf(" Your number is too high, pick another number lower then %d \n", input);
        scanf("%d", &input);
    } 

    // printf("Thank you for playing!\n"); 
    // return 0; 
    int x = 24;
    if (x % 2 == 0 )
    { 
        printf("x is divided my 2");
    }else 
    { 
        printf("x is not divided my 2");
    }

}