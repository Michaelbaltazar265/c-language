#include <stdio.h> 

int main ()
{  
    int num, i;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Natural numbers from 1 to %d : \n", num);

    /*
     * Start loop counter from 1 (i=1) and go till n (i<=n)
     * increment the loop count by 1 to get the next value. 
     * For each repetition print the value of i.
     */
    for(i=1; i<=num; i++)
    {
        printf("%d\n", i);
    }



    return 0;
}