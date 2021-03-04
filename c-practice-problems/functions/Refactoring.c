#include <stdio.h>

#include <stdio.h> 

void printArray(int arr[], int size)
{ 
    for(int i = 0; i < size; i++)
    { 
        printf("%d ", arr[i]);

    }
}

int main ()
{ 
    int myGrades[] = {12, 23, 45}; 
    int const columns = 3;
    int const rows = 2;
    int grades[][columns] = { 
        {12, 23, 45}, 
        {64, 78, 89}
    };

 for (int i = 0; i < rows; i++)
    { 
        printArray(grades[i], columns);
        printf("\n");
    }

    printf("Get access to each array/ colums like this: %d", grades[0][0]);
    

    return 0; 
}
