#include<stdio.h>

void Display(int iNo)
{
    int i=0;
    char ch='A';
    for( i=1;i<=iNo;i++)
    {
       printf("%c\t",ch);
       ch++;
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