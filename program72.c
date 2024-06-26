#include<stdio.h>

//addition of array elements

int Addition(int ptr[],int iSize)
{
    int add=0;
    for(int i=0;i<iSize;i++)
    {
        printf(" %d ",ptr[i]);
        add=add+ptr[i];

    }
    return add;
}
int main()
{
int Arr[5];
int i=0;
int iRet=0;

printf("enter elements\n");

for(i=0;i<5;i++)
{
    scanf("%d",&Arr[i]);
}

iRet=Addition(Arr,5);//Display(100)
printf("Addition is:%d\n",iRet);
return 0;
}