#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool  Check(int Arr[], int iSize,int iNo)
{
    int i=0;
    bool bFlag=0;
    
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]==iNo)
        {
            bFlag=true;
            break;
        }
        

    }
    
    return bFlag;
}

int main()
{   
    int iCount = 0, i = 0;
    bool bRet = false;
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

    bRet= Check(Brr,iCount,iValue);
    if(bRet==true){
    printf("present");
    }
    else{
        printf("not present");
    }
    free(Brr);

    return 0;
}
