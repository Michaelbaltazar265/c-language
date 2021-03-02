#include <stdio.h> 
#include <stdbool.h> 
#include  <math.h>

bool isPrime ( int input) 
{ 
     for (int i = sqrt(input); i > 1; i--)
    {  
       if (input % i == 0)
        { 
           return false;
        } 
    } 
    
    return true;
}
int main ()
{ 
    printf("Please enter a number:  ");
    int input; 
    int count = 0;
    scanf("%d", &input);

    if ( input < 2){ 
        printf("You entered a number less then 2\n");
    }

    for (int i = input; i > 1; i--)
    { 
         bool prime = isPrime(i);
          if (prime)
       { 
           count++;
           printf("%d Is Prime!\n", i);
       }

    }
    printf("The number of prime number from %d is %d\n",input ,count);
    return 0;
}