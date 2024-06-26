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

void InsertFirst(PPNODE First,int No)
{
    PNODE newn=NULL;//just a pointer new node or pointer

    newn=(PNODE)malloc(sizeof(NODE)); //dynamically allocated memmory for new node
    newn->data=No;//Initialised the new node
    newn->next=NULL;

    if(*First==NULL)//check if linked list is empty

    {
        *First=newn;
    }
    else//if linklist contains atleast one node in list
    {
        newn->next=*First;
        *First=newn;
    }

}
void InsertLast(PPNODE First,int No)
{
    PNODE temp=NULL;
    PNODE newn=NULL;//just a pointer new node or pointer

    newn=(PNODE)malloc(sizeof(NODE)); //dynamically allocated memmory for new node
    newn->data=No;//Initialised the new node
    newn->next=NULL;

    if(*First==NULL)//check if linked list is empty

    {
        *First=newn;
    }
    else//if linklist contains atleast one node in list
    {
        temp=*First;//temp=100
        while(temp->next!=0)
        {
            temp=temp->next;
        }
        temp->next=newn;
        
    }

}

void Display(PNODE First)
{
    while (First!=NULL)
    {
        printf("| %d |->",First->data);
        First=First->next;
    }
    printf("NULL\n");
    

}
int Count(PNODE First)

{
    int count=0;
    while(First!=NULL)
    {
        First=First->next;
        count++;
    }
    return count;
}

int main(){
    PNODE Head=NULL;
    int iRet=0;
    InsertFirst(&Head,101);
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);


InsertLast(&Head,101);
    InsertLast(&Head,102);
    InsertLast(&Head,103);
    InsertLast(&Head,104);

    Display(Head);
    iRet=Count(Head);
    printf("count is :%d",iRet);

return 0;
}