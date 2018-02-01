#include <stdio.h>

void main()
{
    int N;
    printf("Enter the number Nu:");
    scanf("%d",&Nu);
    if(0<Nu)
    {
        printf("Number is positive");
    }
         else if(0>Nu)
         {
            printf("Number is negative");
         }
    else
    {
        printf("Number is zero");
    }
}
