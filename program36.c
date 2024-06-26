#include<stdio.h>

void Display(int iNo)
{
    for(int i=1;i<=iNo;i++)
    {
        printf("%d\t*\t" ,i);
    }
    
}


int main()
{
int iValue=0;
printf("enter the no. of times you want to print star:");
scanf("%d",&iValue);
Display(iValue);

return 0;
}