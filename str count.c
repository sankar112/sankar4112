#include <stdio.h>

int countwords(char*str)
{
    int state=0;
    int wc=0;
    while(*str)
    {
        if(*str==' '||*str=='\n'||str=='\t')
        state=0;
        else
        if(state==0)
        {
            state=1;
            ++wc;
        }
        ++str;
    }
    return wc;
}
int main()
{
    char str[200];
    printf("enter the string\n");
    scanf("%[N/n]s",str);
    printf("no of words:%u");
    countwords(str);
    return 0;
}
