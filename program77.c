#include<stdio.h>

int strlensmall(char *str)
{
    int iCnt=0;
    while(*str !='\0')
    {
        if((*str>='a')&& (*str<='z'))
        {
            iCnt++;
        }
        
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet=0;
    printf("enter string:\n");
    scanf("%[^'\n']s",Arr);

    iRet=strlensmall(Arr);

    printf("Number of Small letters in string is:%d\n",iRet);
    return 0;
}