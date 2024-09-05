#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, int No)//call by address
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}   

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First -> next;
    }
    printf("NULL\n");
} 

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First -> next;
    }
    return iCnt;
} 

int Addition(PNODE First)//call by value
{
    int sum=0;
    while(First != NULL)
    {
        sum=sum+(First->data);
        First = First -> next;
    }
return sum;
} 
int EvenCount(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        if((First->data)%2==0)
        {
            iCnt++;
        First = First -> next;
        }
        
    }
    return iCnt;
} 
int OddCount(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        if((First->data)%2!=0)
        {
            iCnt++;
        First = First -> next;
        }
        
    }
    return iCnt;
} 

int Frequency(PNODE First,int No)
{
    int iCnt = 0;

    while(First != NULL)
    {
        if((First->data)==No)
        {
            iCnt++;
        
        }
        First = First -> next;
        
    }
    return iCnt;
} 

int SearchFirstOccurance(PNODE First,int No)
{
    int count=1;
    int iPos=-1;

    while(First!=NULL)
    {
        if((First->data)==No)
        {
           iPos=count;
            break;
        }
        count++;
        First=First->next;
    }
    return iPos;

}

int SearchLastOccurance(PNODE First,int No)
{
    int count=1;
    
    int iPos=-1;
    

    while(First!=NULL)
    {
        if((First->data)==No)
        {
           iPos=count;
            
        }
        count++;
        First=First->next;
    }
    return iPos;

}
void SumDigit(PNODE First)
{
    int iNo=0;
    int digit=0;
    int sum=0;

    while(First!=NULL)
    {
        sum=0;
        iNo=First->data;
        
        while(iNo!=0)
        {
            digit=iNo%10;
            sum=sum+digit;
            iNo=iNo/10;
        }
        printf("sum is %d\n",sum); 
        First=First->next;
    }
}
void SumFactors(PNODE First)
{
    int fact=0;

    while(First!=NULL)
    {


        
    }
}



int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    
    
    InsertFirst(&Head,50);
    InsertFirst(&Head,21);
    InsertFirst(&Head,10);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);
    
    Display(Head);
    // iRet=Addition(Head);
    // printf("addition of all elements is %d\n",iRet);

    // iRet=EvenCount(Head);
    // printf("all EVEN elements is %d\n",iRet);
    // iRet=OddCount(Head);
    // printf("all ODD elements is %d\n",iRet);

    //   iRet=Frequency(Head,21);
    // printf("frequency is %d\n",iRet);

    //  iRet=SearchFirstOccurance(Head,73);
    //  if(iRet==-1)
    //  {
    //      printf("not present in LL");

    //  }
    //  else{
    //          printf("fIRST OCCURANCE IS AT %d\n",iRet);
    //  }

    // iRet=SearchFirstOccurance(Head,21);
    //  if(iRet==-1)
    //  {
    //      printf("not present in LL");

    //  }
    //  else{
    //          printf("fIRST OCCURANCE IS AT  %d\n",iRet);
    //  }
    // iRet=SearchLastOccurance(Head,21);
    //  if(iRet==-1)
    //  {
    //      printf("not present in LL");

    //  }
    //  else{
    //          printf("Last OCCURANCE IS AT  %d\n",iRet);
    //  }

    // iRet=SearchLastOccurance(Head,1);
    //  if(iRet==-1)
    //  {
    //      printf("not present in LL");

    //  }
    //  else{
    //          printf("Last OCCURANCE IS AT  %d\n",iRet);
    //  }

    SumDigit(Head);



    
    return 0;
}
