#include<stdio.h>

void updateStr(char *str)
{
    while(*str !='\0')
    {
    if(*str==' ')
    {
    *str='_';
    }
    str++;
    }
 
}
int main()
{
    char Arr[100];
    printf("enter string:\n  ");
    scanf("%[^'\n']s",Arr);

    updateStr(Arr);

    printf("updated is %s\n",Arr);

    return 0;
}