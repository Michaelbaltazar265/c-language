#include <stdio.h> 

int evenNums (int num)
{ 
    
    printf("Even numbers between 1 to %d\n", num);

        for (int i = 1; i <= num; i++){
           if (i % 2 == 0){ 
                printf("%d\n", i);
           }
        }

        return 0;
}



int main ()
{ 
    int num; 
    printf("Enter a number: ");
    scanf("%d", &num);

    evenNums(num);

    return 0;
}