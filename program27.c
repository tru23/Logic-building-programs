#include<stdio.h>

int EvenCount(int iNo)
{

int iDigit=0;
int iCount=0;
if(iNo<0)
{
    iNo=-iNo;
}
while(iNo>0){
   iDigit=iNo%10;
   if(iDigit%2==0)
    {
        iCount++;
    }
    iNo=iNo/10;
     
}

 return iCount;
}

int main()
{
    int iValue=0;
 int iRet=0;
    printf("enter number:\n");
    scanf("%d",&iValue);
    iRet=EvenCount(iValue);
    printf("no. of even digits are:%d",iRet);
    


    return 0;
}