#include<stdio.h>
void main()
{
    int n, originalnum, result,rem;
    
    printf("enter the numbewr\n");
    scanf("%d",&n);
    originalnum=n;
    while(originalnum!=0)
    {
        rem=originalnum%10;
        originalnum=originalnum/10;
    }
    if(result==n)
    {
        printf("the number is armstrong");
    }
    else
    {
        printf("the number is notarmstrong");
    }
    getch();
}
