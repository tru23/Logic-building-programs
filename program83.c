#include<stdio.h>
#include<stdbool.h>

int CheckOcc(char *str,char ch)
{
   int iCnt=1;
   bool bFlag=false;
    while(*str !='\0')//  \0 is when we press enter  
    {
        if(*str==ch)
        {
            bFlag=true;
            break;
        }
        iCnt++;
        str++;
    }
    if(bFlag==true)
    {
        return iCnt;
    }
    else{
        return -1;
    }
  
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

    iRet=CheckOcc(Arr,cValue); //strlenX(100)

  if(iRet==-1)
  {
    printf("there is no such letter");
    
  }
  else 
  {
    printf("the position is %d",iRet);
  }
    return 0;
}