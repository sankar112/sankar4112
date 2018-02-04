#include <stdio.h>
void main()
{
    int n;
    int *a1,*a2,*a3;
    printf("the product are\n1.bisket\n2.cake\n3.juice");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("%d",&a1);
        break;
        case 2:
        printf("%d",&a2);
        break;
        case 3:
        printf("%d",&a3);
        break;
        default:
        printf("no stacks avilable");
}
}
