#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the values");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
    printf("%d is the largest",a);
    }
    if(b>a && b>c)
    {
        printf("%d is the largest",b);
    }
    if(c>a && c>b)
    {
        printf("%d is the largest",c);
}
}
