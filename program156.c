
#include<stdio.h>
#include<stdlib.h>


void Display(int Arr[],int iSize)
{
    int i=0;
    printf("Reverse is: ");
    for(i=iSize-1;i>=0;i--)
    {
        
        printf(" %d ",Arr[i]);
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

    Display(Brr,iCount);
   
    
    free(Brr);

    return 0;
}