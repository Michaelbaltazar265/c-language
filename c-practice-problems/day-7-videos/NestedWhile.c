#include <stdio.h> 

int main ()
{ 

     int i = 0;
     int k; 
    while (i < 10)
    { 
       k = i;
        while (k >= 0)
        { 
            printf("%d ", k);
            k--;
        }
        
        printf("\n");
        i++;
    }
   
    return 0;
}