#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,rem,i;
printf(" the first number for the range:\n");
scanf("%d",&a);
printf(" the final number for the range:\n");
scanf("%d",&b);
printf("\n the even numbers between %d and %d are",a,b);
for(i=a;i<=b;++i)
{
rem=i%2;
if(rem==0)
printf("\n %d",i);
}
return 0;

}
