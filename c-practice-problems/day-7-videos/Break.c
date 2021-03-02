#include <stdio.h> 

int main ()
{ 
    int num = 23457;
    int i = 0;
    while (1)
    { 
        printf("%d ", i);  
        if(i == num)
        { 
            printf("We found it!\n");
            break;
        }
        i++;
    }
    return 0; 
}