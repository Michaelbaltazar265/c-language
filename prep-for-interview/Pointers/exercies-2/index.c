#include <stdio.h> 

int main ()
{ 
    int i;
    int meatballs[5] = {7, 9 ,43, 21, 3}; 

    int *meat = meatballs;

    printf("Elements \t Address \t Value \n");

    for (i =0; i < 5; i++)
    { 
        printf("meatBalls[%d] \t %p \t %d \n", i, &meatballs[i], meatballs[i]); 
         
    } 

    return 0;
}