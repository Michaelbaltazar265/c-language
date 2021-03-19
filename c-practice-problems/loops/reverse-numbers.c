#include <stdio.h> 

int main ()
{ 
    int i, num;

    // input of number
    printf("Enter a number: "); 
    scanf("%d", &num); 

    printf("Natural numbers from %d -  1: \n", num);

    for (i = num; i >= 1; i--)
    { 
        printf("%d\n", i);
    }

    return 0;
}