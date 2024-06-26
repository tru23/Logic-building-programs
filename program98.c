#include<stdio.h>

int Power(int iNo1, int iNo2)
{

int mult=1;

while(iNo2>0)
{
    mult=mult*iNo1;
    iNo2--;
}

return mult;

}

int main()
{
    int iValue=0,iValue2=0,iRet=0;

    printf("enter first number:");
    scanf("%d",&iValue);

    printf("enter second number:");
    scanf("%d",&iValue2);

    iRet=Power(iValue,iValue2);

    printf("Answer is:%d",iRet);

return 0;
}