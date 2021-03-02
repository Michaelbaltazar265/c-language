#include <stdio.h> 

int main () 
{ 
    // initialization / int i = 0
    // comparison     / i <= 10
    // update         / i++
    printf("type in a number and it will count from 0 to that number. ");
    int max; 
    scanf("%d", &max);

    for(int i = 0; i < max + 1; i++)
    { 
        printf("%d\n", i);
    }

    return 0;
}