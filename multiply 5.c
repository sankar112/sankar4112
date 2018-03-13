#include<stdio.h>
void main()
{
    int n,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d*%d=%d\n",i,n,i*n);;
    }
}
