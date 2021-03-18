#include <stdio.h> 

int main ()
{ 
    int month; 

    // input of month number 
    printf("Enter month number: ");
    scanf("%d", &month);

    switch(month)
    { 
        case 1:
        case 3:
        case 5:
        case 7: 
        case 8:
        case 10:
        case 12:
        printf("Total number of days = 31");
            break;

        case 4:
        case 6:
        case 9:
        case 11:
        printf("Total number of days = 30");
            break;

        case 2:
        printf("Total number of days = 28/29");
            break;   

        default:
        printf("Invald number! Please try again!");       

    }


    return 0;
}