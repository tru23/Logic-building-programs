#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;


};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node **PPNODE;

void Insert(PPNODE Root,int No)
{
    PNODE newn=NULL;
    PNODE temp=NULL;

    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=No;
    newn->lchild=NULL;
    newn->rchild=NULL;

    if(*Root==NULL)//Tree is empty
    {
        *Root=newn;
    }

    else         //Tree contains at least one node
    {
        temp=*Root;

        while(1)//unconitional loop
        {
            if(temp->data==No)// if data equal
            {
                printf("Unable to insert node as elemet is already present ");
                free(newn);
                break;
            }
            else if(No>temp->data)//if data greater
            {
                if(temp->rchild==NULL)
                {
                temp->rchild=newn;
                break;
                }
                temp=temp->rchild;
            }
             else if(No<temp->data)//if data lesss
            
            {
                if(temp->lchild==NULL)
                {
                temp->lchild=newn;
                break;
                }
                temp=temp->lchild;
            }
        }

    }


}

int main()
{
    PNODE Head=NULL;
    

    return 0;
}