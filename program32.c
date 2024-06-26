#include<stdio.h>

int SumOddDigit(int iNo)
{
int iDigit=0;

int sum=0;

if(iNo<0)
{
    iNo=-iNo;
}

while(iNo>0)
{
   iDigit=iNo%10;
    if(iDigit%2!=0){
        sum=sum+iDigit;
    }
    
    iNo=iNo/10;
    
    
}
    return sum;

}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number:\n");
    scanf("%d",&iValue);
    iRet=SumOddDigit(iValue);
    
    printf("sum is:%d",iRet);


    return 0;
}