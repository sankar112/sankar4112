
#include<stdio.h>
int main()
{
int n,se,s=0,r;
scanf("%d",&n);
se=n;
while(n!=0)
{
r=n%10;
s=s*10+r;                                                                           
n=n/10;
}

if(s==se)
printf(" a palindrome");
else
printf("Not");
}
