#include <stdio.h> 

int main ()
{ 
    int size = 5;
    int grades[size];
        grades[0] = 10;
        grades[1] = 15;
        grades[2] = 20888;
        grades[3] = 25;
        grades[4] = 303;

    for (int i = 0; i < size; i++)
    { 
        printf("%d ", grades[i]);
    }
    


    return 0;
}