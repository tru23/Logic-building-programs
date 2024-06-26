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


void Display(PNODE First )
{
    while(First!=NULL)
    {
        printf("|%d|-> ",First->data);
        First=First->next;
    }
    printf("NULL\n");

}//TIME Complexity O(n) of function


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
    int i=0;

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
    int iLength=0;

    iLength=Count(*First);

    if((iPos<1) || (iPos>iLength)) // if we have 7 nodes max pos can be 7 to delete
    {
        printf("Invalid position \n");
        return;
    }
    if(iPos==1)
    {
        DeleteFirst(First);

    }
    else if(iPos==iLength)
    {

        DeleteLast(First);
    }
    else
    {

    }


}


int main()
{
    PNODE Head =NULL;
    int iRet=0;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    InsertLast(&Head,101);
    InsertLast(&Head,121);
     InsertLast(&Head,131);
    InsertLast(&Head,141);
    printf("display after interst first and insert last\n");
    Display(Head);
    iRet=Count(Head);
    printf("count is %d \n",iRet);

    DeleteFirst(&Head);
    printf("display after delete first\n");
    Display(Head);
    iRet=Count(Head);
    printf("count is %d \n",iRet);

     DeleteLast(&Head);
     printf("display after delete last\n");
    Display(Head);
    iRet=Count(Head);
    printf("count is %d \n",iRet);

    InsertAtPos(&Head,105,5);
    printf("display after insrt as pos\n ");
    Display(Head);
    iRet=Count(Head);

    printf("count is %d \n",iRet);

    return 0;
}