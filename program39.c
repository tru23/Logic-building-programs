#include<stdio.h>

void Display(int iNo)
{
    for(int i=1;i<=iNo;i++)
    {
        printf("&\t" );
    }
    printf("\n");
    for(int i=1;i<=iNo;i++)
    {
        printf("*\t");
    }
      printf("\n");
    for(int i=1;i<=iNo;i++)
    {
        printf("$\t");
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