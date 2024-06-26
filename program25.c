#include<stdio.h>

int CountDigits(int iNo){

int iCount=0;
if(iNo<0)
{
    iNo=-iNo;
}
while(iNo!=0){
   
    iNo=iNo/10;
    iCount++;
    
}

return iCount;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number:\n");
    scanf("%d",&iValue);
    iRet = CountDigits(iValue);
    printf("no. of digits are:%d",iRet);


    return 0;
}