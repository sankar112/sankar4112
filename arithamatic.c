#include<stdio.h>
#include<conio.h>
int main()
{
    int g,a,d,i,n;
    printf("enter the arithamatic number");
    scanf("%d%d%d",&g,&a,&d);
    int sum,res;
    sum=(n*(2*a+(g-1)*d))/2;
    res=a+(g-1)*d;
    for(i=a;i<=res;i=i+d)
    {
        if(i==res)
        {
            printf("%d",sum);
        }
    }
}
