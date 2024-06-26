#include<stdio.h>
#include<stdlib.h>

int Check(int Arr[], int iSize,int iNo)
{
    int i=0;
    int count=0;
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]==iNo)
        {
            count++;
        }
        

    }
    
    return count;
}

int main()
{   
    int iCount = 0, i = 0, iRet = 0;
    int *Brr = NULL;
    int iValue=0;
    

    printf("Enter number of elements that you want : \n");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    printf("enter number you want to search");
    scanf("%d",&iValue);

    iRet= Check(Brr,iCount,iValue);
    printf("count  is : %d\n",iRet);
    
    free(Brr);

    return 0;
}
