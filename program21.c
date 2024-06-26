#include<stdio.h>

unsigned long int Factorial(int iNo)
{
     int iCnt=0;
    unsigned long int ifact=1;
     for(iCnt=1;iCnt<=iNo;iCnt++)
     {
        ifact=ifact*iCnt;
     }
return ifact;
}


int main(){

    int iValue=0;
    unsigned long int ret=0;
    printf("enter number\n");
    scanf("%d",&iValue);
     ret=Factorial(iValue);
    printf("factorial is %d\n",ret);

    return 0;
}