#include <stdio.h> 
#define Max_SIZE 100


int main () 
{ 
    int arr[Max_SIZE];
    int i, n, sum=0;

    // input of size of array 

    printf("Enter size of the array: "); 
    scanf("%d", &n); 

    // input element in array
    printf("Enter %d elements in the array: ", n);
    for (i =0; i < n; i++)
    { 
        scanf("%d", &arr[i]);
    }

    // adding part

    for (i = 0; i < n; i++)
    { 
        sum = sum + arr[i];
    }

    printf("The Sum of all elements of Array = %d", sum);

    return 0;
}