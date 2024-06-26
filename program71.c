#include<stdio.h>

//addition of array elements

int Addition(int ptr[],int iSize)
{
    int add=0;
    for(int i=0;i<iSize;i++)
    {
        add=add+ptr[i];

    }
    return add;
}
int main()
{
int Arr[5]={10,20,30,40,50};//static representarion of array 
int iRet=0;
iRet=Addition(Arr,5);//Display(100)
printf("Addition is:%d\n",iRet);
return 0;
}