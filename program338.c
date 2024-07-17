#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Display(PNODE First,PNODE Last )
{
    if(First==NULL && Last==NULL)
    return;
    
        do
        {
            printf("|%d|<->",First->data);
            First=First->next;
        } while (First!=Last->next);

        printf("\n");
        

    
}
int Count(PNODE First,PNODE Last)
{
    int iCount=0;
    if(First==NULL && Last==NULL)
    return 0;
    
        do
        {
            iCount++;
            First=First->next;
        } while (First!=Last->next);
        
return iCount;

    
}
void InsertFirst(PPNODE First,PPNODE Last, int No)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if(*First==NULL && *Last==NULL)
    {
        *First=newn;
        *Last=newn;
    }
    else{
        newn->next=*First;
        (*First)->prev=newn;
        *First=newn;

    }
    (*Last)->next=*First;
    (*First)->prev=*Last;

}

void InsertLast(PPNODE First,PPNODE Last, int No)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if(*First==NULL && *Last==NULL)
    {
        *First=newn;
        *Last=newn;
    }
    else{
        newn->prev=*Last;
        (*Last)->next=newn;
        *Last=newn;
    }
    (*Last)->next=*First;
    (*First)->prev=*Last;

}
void DeleteFirst(PPNODE First,PPNODE Last)
{
    if(*First==NULL && *Last==NULL)
    {
        printf("Linked list empty");
        return;
    }
    else if(*First==*Last)
    {
        free(*First);
        free(*Last);
        *First=NULL;
        *Last=NULL;
    }
    else{
        *First=(*First)->next;
        free((*First)->prev);


    }
 
    (*Last)->next=*First;
    (*First)->prev=*Last;
}

void DeleteLast(PPNODE First,PPNODE Last)
{

    if(*First==NULL && *Last==NULL)
    {
        printf("Linked list empty");
        return;
    }
    else if(*First==*Last)
    {
        free(*First);
        free(*Last);
        *First=NULL;
        *Last=NULL;
    }
    else{
        *Last=(*Last)->prev;
        free((*First)->prev);
      

    }
 
    (*Last)->next=*First;
    (*First)->prev=*Last;
}
void InserAtPos(PPNODE First,PPNODE Last, int No,int iPos)
{
    int iLength=0;
    iLength=Count(*First,*Last);
    int i=0;

    PNODE newn=NULL;
    PNODE temp=NULL;

    if(iPos<1 || iPos>iLength+1)
    {
        printf("INVALID POSITION");
        return;
    }
    if(iPos==1)
    {
        InsertFirst(First,Last,No);
    }
    else if(iPos==iLength+1)
    {
        InsertLast(First,Last,No);
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
        temp->next->prev=newn;
        newn->prev=temp;
        temp->next=newn;

    }
}

void DeleteAtPos(PPNODE First,PPNODE Last, int iPos)
{
    int iLength=0;
    iLength=Count(*First,*Last);
    int i=0;

    
    PNODE temp=NULL;
    PNODE temp2=NULL;

    if(iPos<1 || iPos>iLength)
    {
        printf("INVALID POSITION");
        return;
    }
    if(iPos==1)
    {
        DeleteFirst(First,Last);
    }
    else if(iPos==iLength)
    {
        DeleteLast(First,Last);
    }
    else{
       
        temp=*First;
        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        temp2=temp->next;

        temp->next=temp2->next;
        temp2->next->prev=temp;
        free(temp2);
       
    }
}


int main()
{
    PNODE Head=NULL;
    PNODE Tail=NULL;
    int iRet=0;

    InsertFirst(&Head,&Tail,20);
    InsertFirst(&Head,&Tail,30);
    InsertFirst(&Head,&Tail,40);

    Display(Head,Tail);
    iRet=Count(Head,Tail);
    printf("Count is %d \n",iRet);

    InsertLast(&Head,&Tail,110);
    InsertLast(&Head,&Tail,130);
    InsertLast(&Head,&Tail,140);

    Display(Head,Tail);
    iRet=Count(Head,Tail);
    printf("Count is %d \n",iRet);

    DeleteFirst(&Head,&Tail);
    Display(Head,Tail);
    iRet=Count(Head,Tail);
    printf("Count is %d \n",iRet);

    DeleteLast(&Head,&Tail);
    Display(Head,Tail);
    iRet=Count(Head,Tail);
    printf("Count is %d \n",iRet);

    InserAtPos(&Head,&Tail,115,4);
    Display(Head,Tail);
    iRet=Count(Head,Tail);
    printf("Count is %d \n",iRet);

    DeleteAtPos(&Head,&Tail,4);
    Display(Head,Tail);
    iRet=Count(Head,Tail);
    printf("Count is %d \n",iRet);

    


    return 0;
}