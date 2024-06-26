#include<stdio.h>

void Display(int iNo)
{
    for(int i=iNo;i>=1;i--)
    {
       printf("%d\t*\t",i);
       
    }
    
}


int main()
{
int iValue=0;
printf("enter the no.:");
scanf("%d",&iValue);
Display(iValue);

return 0;
}