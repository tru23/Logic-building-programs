#include<stdio.h>

int countVowel(char *str)
{
    int iCnt=0;
    while(*str !='\0')//  \0 is when we enter tab 
    {
        if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
        {
            iCnt++;
        }
        
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];//static memmory allocation 
    int iRet=0;
    printf("enter string:\n");
    scanf("%[^'\n']s",Arr);

    iRet=countVowel(Arr); //strlenX(100)

    printf("Number of vovwels in string is:%d\n",iRet);
    return 0;
}