#include <stdio.h> 

int main ()
{ 
    printf("How many pizza slices did you eat? ");
    int slices;
    scanf("%d", &slices);

    switch (slices)
    {
    case 1:
    printf("You did a great job only having 1 slice");
        break;
     case 2:
      printf("You did a great job only having 2 slice");
        break;
         case 3:
          printf("You ate 3 slices you're fat");
        break;
         case 4:
          printf("You ate 4 slices way to much");
        break;
    default:
     printf(" Enjoy your heart disease");
        break;
    }

    return 0;
}