#include <stdio.h>
#define Max_SIZE 100 

int main ()
{ 

    int arr[Max_SIZE];
    int min , max, size;

    // input of size array
     printf("Enter Size of Array: ");
     scanf("%d", &size); 

     // input of all elements in array

     printf("Enter all elements of array: "); 

     for (int i = 0; i < size; i++)
     { 
         scanf("%d", &arr[i]);
         
     } 

     min = arr[0];
     max = arr[0]; 

     for (int i = 0; i < size; i++)
     { 
         if (arr[i] < min)
         { 
             min = arr[i];

         } else if ( arr[i] > max)
         { 
             max = arr[i];
         }
     }

     printf("This is the min: %d\n", min);
     printf("This is the max: %d\n", max);


    return 0;
}