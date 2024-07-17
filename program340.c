#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Display(PNODE First)
{
    if(First==NULL)
    {
        return;
    }

    while(First!=NULL)
    {
        printf("%d\t",First->data);
        First=First->next;
    }
    printf("\n");

}

void Enqueue(PPNODE First,int No)
{
    PNODE newn=NULL;
    PNODE temp=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=No;
    newn->next=NULL;


    if(*First==NULL)
    {
        *First=newn;

    }
    else{
        temp=*First;

        while (temp->next!=NULL)
    
        {
            temp=temp->next;
        }
        temp->next=newn;

        
        
        
    }

}

void Dequeue(PPNODE First)
{
    PNODE temp=NULL;
    if(First==NULL)
    {
        printf("Stack is empty");
        return;

    }
    else{
        temp=*First;
        *First=(*First)->next;
        free(temp);

    }
}

int main()
{
    PNODE Head=NULL;

    Enqueue(&Head,10);
    Enqueue(&Head,20);
    Enqueue(&Head,30);
    Enqueue(&Head,40);

    Display(Head);

    Dequeue(&Head);
    printf("AFTER DEQUEUE\n");

    Display(Head);

    printf("AFTER ENQUEUE\n");

    Enqueue(&Head,60);
    Enqueue(&Head,90);

     Display(Head);

    return 0;
}