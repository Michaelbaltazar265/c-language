#include <stdio.h> 

int main ()
{
    int year;

    // inputs years
    printf("Enter an year: "); 
    scanf("%d", &year);

    // checks leap

    (year%4 == 0 && year%100 !=0 ) ? printf("Leap year") : (year%400 == 0) ? printf("leap year") : printf("NOT a leap year");

    return 0;
}