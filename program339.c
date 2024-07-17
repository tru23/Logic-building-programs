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
        printf("%d\n",First->data);
        First=First->next;
    }

}

void Push(PPNODE First,int No)
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

}

void Pop(PPNODE First)
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

    Push(&Head,10);
    Push(&Head,20);
    Push(&Head,30);
    Push(&Head,40);

    Display(Head);

    Pop(&Head);
    printf("AFTER POP\n");

    Display(Head);

    return 0;
}