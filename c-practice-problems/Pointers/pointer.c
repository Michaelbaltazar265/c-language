#include <stdio.h>

int main()
{
    // what is a pointer
    // for example of a pointer is int *p = &x;

    int slices = 20;
    // here is pointer
    int *p = &slices;

    printf("Slices: %d\n", slices);
    printf("Slices (through pointer): %d\n", *p);

    slices = 21;

    printf("Slices Part 2: %d\n", slices);
    printf("Slices Part 2 (through pointer): %d\n", *p);

    *p = 25;

     printf("Slices Part 3: %d\n", slices);
    printf("Slices Part 3 (through pointer): %d\n", *p);
    return 0;
}