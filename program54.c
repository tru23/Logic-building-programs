
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0;
    int j=0;
    for( i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(i%2==0){
                printf("$ ");
            }
            else{
                printf("* ");
            }
           
        }
        

       printf("\n"); 
    }  
}

int main()
{
int iValue1=0;
int iValue2=0;
printf("enter number of rows");
scanf("%d",&iValue1);
printf("enter number of columns");
scanf("%d",&iValue2);
Display(iValue1,iValue2);

return 0;
}