#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node*PNODE;
typedef struct node **PPNODE;

void Display(PNODE First, PNODE Last)
{
    if((First==NULL)&&(Last==NULL))//filter
    return;

    do
    {
       printf("|%d |->",First->data);
       First=First->next;
    } while (First!=Last->next);
    printf("NULL\n");
    
}
int Count(PNODE First, PNODE Last)
{
    int count=0;
    if((First==NULL)&&(Last==NULL))//filter
    {
        return 0;
    };
    do
    {
        count++;
        First=First->next;
    } while (First!=Last->next);

    return count;
    
}


void InsertFirst(PPNODE First,PPNODE Last,int No)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;

    if((*First==NULL)&&(*Last==NULL))
    {
        *First=newn;
        *Last=newn;
        
    }
    else
    {
        newn->next=*First;
        *First=newn;
       
    }
     (*Last)->next=*First;
}

void InsertLast(PPNODE First,PPNODE Last,int No)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;

    if((*First==NULL)&&(*Last==NULL))
    {
        *First=newn;
        *Last=newn;
        
    }
    else
    {
       (*Last)->next=newn;
       *Last=newn;
       
    }
     (*Last)->next=*First;
}

void DeleteFirst(PPNODE First,PPNODE Last)
{
    
    if((*First==NULL)&&(*Last==NULL))
    {
        return;
        
    }
    else if(*First==*Last)//or *First->next=First
    {
        free(*First);//or free(*Last)
        *First=NULL;
        *Last=NULL;
    }
    else
    {
     
        *First=(*First)->next;
        free((*Last)->next);
        (*Last)->next=*First;

    }
}

void DeleteLast(PPNODE First,PPNODE Last)
{
    PNODE temp=NULL;
    if((*First==NULL)&&(*Last==NULL))
    {
        return;
        
    }
    else if(*First==*Last)//or *First->next=First
    {
        free(*First);//or free(*Last)
        *First=NULL;
        *Last=NULL;
    }
    else
    {
        temp=*First;
        while(temp->next!=*Last)
        {
            temp=temp->next;
        }
        
        free(*Last);
        *Last=temp;
        (*Last)->next=*First;

    }
}
void InsertAtPos(PPNODE First,PPNODE Last,int No,int iPos)
{
    int i=0;
    int iLength=0;
    PNODE newn=NULL;
    PNODE temp=NULL;
    iLength=Count(*First,*Last);

    if((iPos<1)||(iPos>iLength+1))
    {
        printf("Invalid position\n");
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

void DeleteAtPos(PPNODE First,PPNODE Last,int iPos)
{
    int i=0;
    int iLength=0;
    
    PNODE temp=NULL;
    PNODE temp2=NULL;
    iLength=Count(*First,*Last);

    if((iPos<1)||(iPos>iLength))
    {
        printf("Invalid position\n");
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
    else
    {
       
        temp=*First;
        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        temp2=temp->next;
        temp->next=temp2->next;
        free(temp2);
    }

}


int main()
{
    PNODE Head=NULL;
    PNODE Tail=NULL;

    int iRet=0;
Display(Head,Tail);
    InsertFirst(&Head,&Tail,10);
    InsertFirst(&Head,&Tail,20);
    InsertFirst(&Head,&Tail,30);

    InsertLast(&Head,&Tail,110);
    InsertLast(&Head,&Tail,120);
    InsertLast(&Head,&Tail,130);

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

    InsertAtPos(&Head,&Tail,102,3);
    Display(Head,Tail);
    iRet=Count(Head,Tail);
    printf("Count is %d \n",iRet);

    DeleteAtPos(&Head,&Tail,3);
    Display(Head,Tail);
    iRet=Count(Head,Tail);
    printf("Count is %d \n",iRet);

    return 0;

}