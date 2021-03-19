#include <stdio.h> 
#include <limits.h> // For INT_MIN

#define MAX_SIZE 1000     // Maximum array size 

int main ()
{   
    // create 4 variable for 2 min the size, array
    int arr[MAX_SIZE];
    int size, min1, min2;

    // ask use to enter size
    printf("Enter the size of the Array: ");
    // store size in var
    scanf("%d", &size);

    // ask use to enter elements 
    printf("Enter the elements of the array: "); 
    // store elements in var array for loop is need
    for (int i = 0; i < size; i++){ 
        scanf("%d", &arr[i]);
    }

    min1 = min2 = INT_MIN; 
   

    // loop the array search for first min 
    for (int i = 0; i < size; i++)
    { 
        if (arr[i] < min1){ 
            min2 = min1;
            min1 = arr[i];
        } 
        else if (arr[i] < min2 && arr[i] > min1) { 
            min2 = arr[i];
        }
        
    } 

    // search for second min

    printf("Min 1: %d\n Min 2: %d\n", min1, min2);

    return 0;
}