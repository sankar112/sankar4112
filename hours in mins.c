#include <stdio.h>

int main()
{
    int mins,hours,s;
    printf("enter the time in minutes");
    scanf("%d",&mins);
    hours=mins/60;
    s=mins%60;
    printf("hours is %d min is %d",hours,s);
}
