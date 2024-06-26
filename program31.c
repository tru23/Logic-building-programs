#include<stdio.h>

int SumEvenDigit(int iNo)
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
    if(iDigit%2==0){
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
    iRet=SumEvenDigit(iValue);
    if(iRet=0){
        printf("no even  numbers ");
    }
    printf("sum is:%d",iRet);


    return 0;
}