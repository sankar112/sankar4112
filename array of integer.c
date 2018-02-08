#include<stdio.h>
int main()
{
    int q,r,t[100],i,y=0;
    printf("enter the value for q");
    scanf("%d",&q);
    printf("enter the value of r");
    scanf("%d",&r);
    printf("enter an array");
    for(i=0;i<q;i++)
    {
        scanf("%d",&t[i]);
    }
    for(i=0;i<r;i++)
    {
        y+=t[i];
    }
    printf("%d",y);
        return 0;
}


