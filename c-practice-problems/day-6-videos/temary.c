#include <stdio.h> 

int main() 
{ 
    double money = 10; 
    double cost = 25; 

    money > cost ? printf("You can afford it!\n") : printf("Sorry... You need %lf more moneyz\n", cost - money );

    // if (money > cost) 
    // { 
    //     printf("You can afford it!\n");
    // } else { 
    //     printf("Sorry... You need %lf more moneyz\n", cost - money );
    // }

    return 0;
}