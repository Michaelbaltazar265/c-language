
#include <stdio.h> 
#include <stdbool.h> 
#include <stdlib.h>
/* 
Doctors Office App
1. add a patient 
2. View a patient
3. Search patient
4. exit

*/


int main ()
{ 
    
    printf(" Choose a menu option 1 -4: \n");
    printf("1. add a patient\n");
    printf("2. View a patient\n");
    printf("3. Search patient\n");
    printf("4. Exit\n");
    
    int input; 
    scanf("%d", &input);

    if (input == 1){ 
        printf("Adding a patient\n");
    }
    else if ( input == 2){ 
        printf("Viewing a patient\n");
    }
     else if ( input == 3){ 
        printf("Searching patient\n");
    }
    else if (input == 4){ 
        printf("Exiting...\n");
        printf("Do you want to save? Y/N\n"); 
        char q; 
        getchar();
        scanf("%c", &q);

        if (q == 'Y' || q == 'y')
        { 
             printf("Saving changes!"); 
        } else if ( q == 'N' || q == 'n')
        { 
            printf("No changes are being saved"); 
        } else { 
            printf("Self destracting in 5...4..3.2,1!    BOOM!\n");
        }
    } else { 
        printf("Wrong input\n");
    }

    return 0;
}