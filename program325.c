#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE; 

void InsertFirst(PPNODE First ,int No)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;

    if(*First==NULL)
    {
        *First=newn;
    }
    else{
        newn->next=*First;
        *First=newn;

    }


}//TIME Complexity O(1) of function

void InsertLast(PPNODE First ,int No)
{
       PNODE temp=NULL;
       PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;

    if(*First==NULL)
    {
        *First=newn;
    }
    else{

        temp=*First;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;

        
    }

}//TIME Complexity O(1) of function


//void Display(PNODE First )
//{
 //   while(First!=NULL)
 //   {
 //       printf("|%d|-> ",First->data);
 //       First=First->next;
 //   }
  //  printf("NULL\n");

//}//TIME Complexity O(n) of function
void Display(PNODE First)
{
    if(First!=NULL)
    {
        //Display(First->next);// Head recursion 
        printf("%d\t",First->data);
        Display(First->next);// Tail recursion
    }
    printf(" ");
}

int Count(PNODE First )
{
    int count=0;
while(First!=NULL)
    {
       count++;
        First=First->next;
    }
    return count;

}//TIME Complexity O(n) of function

/*
int Count(PNODE First)
{
    static int iCount=0;
    if(First!=NULL)
    {
        iCount++;
        First=First->next;
        Count(First);
    }
    return iCount;
}*/


void DeleteFirst(PPNODE First)
{
    PNODE temp=NULL;

    if(*First==NULL)       //Case1
    {
        printf("Unable to delete as linked list is empty");
        return;
    }
    //bracket is must (*First)
    //because * and -> elements aare used combinely
    else if((*First)->next==NULL)  //Case2
    {
        free(*First);
        *First=NULL;

    } 
    else        //Case3
    {
        temp=*First; //temp=100  as per diagram in book
        *First=(*First)->next;//head=200;
        free(temp);//free(100)
        

    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp=NULL;

    if(*First==NULL)       //Case1
    {
        printf("Unable to delete as linked list is empty");
        return;
    }
    //bracket is must (*First)
    //because * and -> elements aare used combinely
    else if((*First)->next==NULL)  //Case2
    {
        free(*First);
        *First=NULL;

    } 
    else        //Case3
    {
        temp=*First;
         while(temp->next->next!=NULL)
         {
            temp=temp->next;

         }
         free(temp->next);
         temp->next=NULL;

    }

}

void InsertAtPos(PPNODE First,int No, int iPos)
{
    PNODE newn=NULL;
    PNODE temp=NULL;
    int iLength=0;
    int i=1;

    iLength=Count(*First);

    if((iPos<1) || (iPos>iLength+1)) // if we have 7 nodes we chan take pos as 8 therefore iLength+1
    {
        printf("Invalid position \n");
        return;
    }
    if(iPos==1)
    {
        InsertFirst(First,No);

    }
    else if(iPos==iLength+1)
    {

        InsertLast(First,No);
    }
    else
    {
        newn=(PNODE)malloc(sizeof(NODE));

        newn->data=No;
        newn->next=NULL;

        temp=*First;
        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;

    }

}

void DeleteAtPos(PPNODE First, int iPos)
{
    int iLength = 0;
    int i = 0;

    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    iLength = Count(*First);

    if((iPos < 1) || (iPos > iLength))
    {
        printf("Invalid position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(First);
    }
    else if(iPos == iLength)
    {
        DeleteLast(First);
    }
    else
    {
        temp1 = *First;

        for(i = 1; i < iPos -1; i++)
        {
            temp1 = temp1 -> next;
        }

        temp2 = temp1 -> next;

        temp1->next = temp2 -> next;
        free(temp2);
    }
}
int main()
{
    PNODE Head =NULL;
    int iRet=0;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);
    iRet=Count(Head);

    printf("count is %d \n",iRet);

    InsertLast(&Head,101);
    InsertLast(&Head,121);
     InsertLast(&Head,131);
    InsertLast(&Head,141);
    
    Display(Head);
    iRet=Count(Head);

    printf("count is %d \n",iRet);

    printf("display after insrt as pos\n ");
    
    InsertAtPos(&Head,105,5);
    Display(Head);
    iRet=Count(Head);

    printf("count is %d \n",iRet);
    printf("display after Delete at pos\n ");

    DeleteAtPos(&Head,5);
    Display(Head);
    iRet=Count(Head);

    printf("count is %d \n",iRet);

    return 0;
}