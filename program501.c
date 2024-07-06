#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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

void Inorder(PNODE Root)
{
    if(Root !=NULL)
    {
        Inorder(Root->lchild);//recursive call
        printf("%d\n",Root->data);//recusive call
        Inorder(Root->rchild);
    }
}

bool Search(PNODE Root,int No)
{
    bool flag=false;
    if(Root==NULL)
    {
        printf("Tree is empty\n");
        return flag;
    }
    while(Root!=NULL)
    {
        if(Root->data==No)
        {
            flag=true;
        }
        else if(No>Root->data)
        {
            Root=Root->rchild;
        }
        else if(No<Root->data)
        {
            Root=Root->lchild;
        }
    }

return flag;
}

int CountLeaf(PNODE Root)
{
    static int iCnt=0;
    if(Root!=NULL)
    {
        if(Root->lchild==NULL && Root->rchild==NULL )
        {
            iCnt++;
        }
        CountLeaf(Root->lchild);
        CountLeaf(Root->rchild);
    }
    return iCnt;
}

int CountParent(PNODE Root)
{
    static int iCnt=0;
    if(Root!=NULL)
    {
        if(Root->lchild!=NULL || Root->rchild!=NULL )
        {
            iCnt++;
        }
        CountParent(Root->lchild);
        CountParent(Root->rchild);
    }
    return iCnt;
}
void Preorder(PNODE Root)
{
    if(Root !=NULL)
    {
         printf("%d\n",Root->data);//recusive call
        Inorder(Root->lchild);//recursive call
       
        Inorder(Root->rchild);
    }
}
void Postorder(PNODE Root)
{
    if(Root !=NULL)
    {
       
        Inorder(Root->lchild);//recursive call
       
        Inorder(Root->rchild);
          printf("%d\n",Root->data);//recusive call
    }
}

int main()
{
    PNODE Head=NULL;
    bool bRet=false;
    int iRet=0;

    Insert(&Head,21);
    Insert(&Head,34);
    Insert(&Head,11);
    Insert(&Head,98);
    Insert(&Head,44);
    Insert(&Head,28);
    Insert(&Head,11);
    Insert(&Head,7);
    Insert(&Head,17);


/*
bRet=Search(Head,28);

if(bRet==true)
{
    printf("element is present\n");
}
else{
    printf("element is not present\n");
}*/
iRet=CountLeaf(Head);
printf("count of leafnodes is %d\n",iRet);

iRet=CountParent(Head);
printf("count leafparent is %d",iRet);



    return 0;
}