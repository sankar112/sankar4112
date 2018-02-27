#include <stdio.h>
#include<conio.h>
int main()
{
    int a[5],i,j,h;
    printf("Enter the three numbers\n");
    for(i=1;i<=3;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=3;i++)
    printf("The Numbers are %d\n",a[i]);
    for(i=1;i<=3;i++)
    for(j=i+1;j<=3;j++){
    if(a[i]>a[j])
    {
    h=a[i];
    a[i]=a[j];
    a[j]=t;
    }}
    for(i=1;i<=3;i++)
    printf("The sorted order is %d\n",a[i]);
    printf("The median element is %d",a[2]);
}
