#include<stdio.h>
#include<conio.h>
int main()
{
    int hr,min,hr1,min1,hr2,min2;
    printf("enter the two time hr min\n");
    scanf("%d%d",&hr1,&min1);
    scanf("%d%d",&hr2,&min2);
    hr=hr1-hr2;
    min=min1-min2;
    printf("%d\t%d",hr,min);
}
