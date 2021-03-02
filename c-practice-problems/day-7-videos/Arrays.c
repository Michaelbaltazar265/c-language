#include <stdio.h> 

int main ()
{ 
    // Arrays are all the same data type all int you cant put a double 
    int myGrades[10];
    myGrades[0] = 10;
    myGrades[1] = 11;

    int updateGrades[] = {10, 12, 15, 18, 21, 26, 1};
    int x = updateGrades[0] + 10;
    printf("this is from update %d\n ", updateGrades[0]);
    printf("%d ", myGrades[0]);

    printf(" this is X %d", x);

    // index = 0 based number
    // element 
    // size 


    return 0;
}