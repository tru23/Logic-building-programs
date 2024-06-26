#include<stdio.h>

int CountOne(int iNo)
{
    int iDigit=0;
    printf("binary conversion is\n");
    int count=0;
    while(iNo>0)
    {
      iDigit=iNo%2;
      if(iDigit==1){
        count++;
      }
      iNo=iNo/2;
    }
    return count;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number: ");
    scanf("%d",&iValue);

    iRet=CountOne(iValue);
    printf("NUmber of 1 are %d:",iRet);

   return 0;
}