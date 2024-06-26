#include<stdio.h>
#include<stdbool.h>

int CountFreq(char *str,char ch)
{
   int iCnt=0;
   
    while(*str !='\0')//  \0 is when we press enter  
    {
        if(*str==ch)
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
    char cValue;

    printf("enter string:\n");
    scanf("%[^'\n']s",Arr);

    printf("enter apbhabet you want to search=");
    scanf(" %c",&cValue);

    iRet=CountFreq(Arr,cValue); //strlenX(100)

  printf("the frequency is %d",iRet);
    return 0;
}