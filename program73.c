#include<stdio.h>

#include<stdlib.h>


int main()
{
    int iCount=0;
    int i=0;
    int *Brr=NULL;
    
    //step1:accept number of elemts from user
    printf("entre no. of elements you want\n");
    scanf("%d",&iCount);
//step2:allocate dynamic memory for thet number of elements
    Brr=(int *)malloc(iCount * sizeof(int)); //dynamically memory allocation syntax

//step3:accept the values from user and store it in memory
     printf("enter %d elements\n",iCount);
     for( i=0;i<iCount;i++)
     {
        scanf("%d",&Brr[i]);
     }

     printf("entered elements are:\n");
     for(i=0;i<iCount;i++)
     {
        printf(" %d ",Brr[i]);
     }

     //step4 (MISSING WILL BE USED WHEN FUNCTION IS ADDED)
     //STEP4: pass the address of that memory to the function (any)
       
//step 5: after using that memory free it explicitely
       free(Brr);
    

return 0;
}