#include<stdio.h>

void Display(int iNo)
{
    int i=0;
    
    for( i=-iNo;i<=iNo;i++)
    {
       printf("%d\t",i);
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