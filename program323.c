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
        printf("%d ",First->data);
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


int main()
{
    PNODE Head =NULL;
    int iRet=0;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    InsertLast(&Head,101);
    InsertLast(&Head,121);

    Display(Head);
    iRet=Count(Head);

    printf("count is %d ",iRet);

    return 0;
}