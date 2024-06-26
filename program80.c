#include<stdio.h>

int countSpace(char *str)
{
    int iCnt=0;
    while(*str !='\0')//  \0 is when we press enter  
    {
        if((*str==' '))
        {
            iCnt++;
        }
        
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[100];//static memmory allocation 
    int iRet=0;
    printf("enter string:\n");
    scanf("%[^'\n']s",Arr);

    iRet=countSpace(Arr); //strlenX(100)

    printf("Number of spaces in string is:%d\n",iRet);
    return 0;
}