#include<stdio.h>

void main()
{
    int a[5],i,j;
    printf("enter the number:\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("enter the number");
    for(i=0;i<5;i++)

    for(j=i+1;j<5;j++)
if(a[i]>a[j])
{
    int t;
    t=a[i];
    a[i]=a[j];
    a[j]=t;
}
for(i=0;i<5;i++)
printf("%d",a[i]);


}
