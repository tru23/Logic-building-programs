#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;//size 4
    struct node *next;//size 8
    struct node *prev;//size 8 ONLY THIS is changed from singly linklist
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE First)
{
     printf("\nNULL <->");
    while(First!=NULL)
    {
        printf("|%d|<->",First->data);
        First=First->next;
    }
    printf("NULL\n");

}


int Count(PNODE First)
{
    int count=0;
    while(First!=NULL)
    {
        count++;
        First=First->next;
    }

return count;
}

void InsertFirst(PPNODE First,int No)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;//$

    if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
        newn->next=*First;
        (*First)->prev=newn;
        *First=newn;
    }

}
void InsertLast(PPNODE First,int No)
{
    PNODE newn=NULL;
    PNODE temp=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;//$

    if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
        temp=*First;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp;//$
       
    }


}

void InsertAtPos(PPNODE First,int No,int iPos)
{
    int iLength=0;
    iLength=Count(*First);

    PNODE newn =NULL;
    PNODE temp=NULL;
    int i=0;

    if((iPos<1)||(iPos>iLength+1))//filter
    {
        printf("Invalif position\n");
        return;
    }
    if(iPos==1)//CASE 1
    {
        InsertFirst(First,No);
    }
    else if(iPos==iLength+1)
    {
        InsertLast(First,No);
    }
    else{
        newn=(PNODE)malloc(sizeof(NODE));

        newn->data=No;
        newn->next=NULL;
        newn->prev=NULL;

        temp=*First;
        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next->prev=newn;//$
       
        temp->next=newn;
         newn->prev=temp;//$
        
    }



}


void DeleteFirst(PPNODE First)
{
    if(*First==NULL)
    {
        printf("Unable to delete the node as ll is empty\n");
        return;
    }
    else if((*First)->next==NULL)
    
    {
        free(*First);
        *First=NULL;

    }

    else{

        *First=(*First)->next;
        free((*First)->prev);//$
        (*First)->prev=NULL;//$

    }

}

void DeleteLast(PPNODE First)
{
    PNODE temp=NULL;

     if(*First==NULL)
    {
        printf("Unable to delete the node as ll is empty\n");
        return;
    }
    else if((*First)->next==NULL)
    
    {
        free(*First);
        *First=NULL;

    }

    else{
        temp=*First;

        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;


    }

}

void DeleteAtPos(PPNODE First,int iPos)
{
 int iLength=0;
    iLength=Count(*First);

    
    PNODE temp=NULL;
    int i=0;

    if((iPos<1)||(iPos>iLength))//filter
    {
        printf("Invalif position\n");
        return;
    }
    if(iPos==1)//CASE 1
    {
        DeleteFirst(First);
    }
    else if(iPos==iLength+1)
    {
        DeleteLast(First);
    }
    else{
        
        temp=*First;
        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        free(temp->next->prev);
        temp->next->prev=temp;
    }



}

int main()
{
    PNODE Head =NULL;
    int iRet=0;

    InsertFirst(&Head,8);
    InsertFirst(&Head,4);
    InsertFirst(&Head,12);
    
    InsertLast(&Head,5);
    InsertLast(&Head,18);
    InsertLast(&Head,3);

Display(Head);
    iRet=Count(Head);
    printf("count is %d",iRet);

    DeleteFirst(&Head);

    Display(Head);
    iRet=Count(Head);
    printf("count is %d",iRet);

    DeleteLast(&Head);
    Display(Head);
    iRet=Count(Head);
    printf("count is %d",iRet);

    InsertAtPos(&Head,105,3);
    Display(Head);
    iRet=Count(Head);
    printf("count is %d",iRet);

    DeleteAtPos(&Head,3);
    Display(Head);
    iRet=Count(Head);
    printf("count is %d",iRet);



    return 0;
}