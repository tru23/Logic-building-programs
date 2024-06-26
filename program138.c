#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[], int iSize)
{
    int i=0;
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]%2==0)
        {
            printf("even elements are %d\n",Arr[i]);
        }  
    }
}

int main()
{   
    int iCount = 0, i = 0;
    int *Brr = NULL;

    printf("Enter number of elements that you want : \n");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

     DisplayEven(Brr,iCount);    // Addition(100,4)
   
    free(Brr); // free(100)

    return 0;
}

/*

Step 1 :    Accept number of elements from user

Step 2 :    Allocate dynamic memory for that number of elements

Step 3 :    Accept the values from user and store into that memory

Step 4 :    Pass the address of that memory to the function (Any)

Step 5 :    After using that memory free it explicitely

*/