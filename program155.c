
#include<stdio.h>
#include<stdlib.h>


void Updater(int Arr[],int iSize)
{
    int i=0;
    for(i=0;i<iSize;i++)
    {
        Arr[i]=Arr[i]*2;
    }
    
}
int main()
{
    int iCount=0;
    int *Brr=NULL;
    int i=0;
    

    printf("enter number elements you want to add");
    scanf("%d",&iCount);

    Brr=(int*)malloc(iCount * sizeof(int));

    printf("enter elements\n");
    for(i=0;i<iCount;i++)
    {
        scanf("%d",&Brr[i]);
    }

    Updater(Brr,iCount);
    printf("Data after updation is\n");
    for(i=0;i<iCount;i++)
    {
        printf("%d\n",Brr[i]);
    }

    free(Brr);

    return 0;
}