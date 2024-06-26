
#include<stdio.h>
#include<stdlib.h>


void Reverse(int Arr[],int iSize)
{
    int i=0;
    int temp=0;

    int end=0;
    end=iSize-1;
    int start=0;
    start=0;

    while(end>start)
    {
        temp= Arr[start];
        Arr[start]=Arr[end];
        Arr[end]=temp;

        start++;
        end--;
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

    Reverse(Brr,iCount);
    printf("Array after Reverse is\n");
    for(i=0;i<iCount;i++)
    {
        printf("%d\n",Brr[i]);
    }

    free(Brr);

    return 0;
}