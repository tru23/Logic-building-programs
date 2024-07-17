#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCL
{
    private:
        PNODE First;
        PNODE Last;
        int iCount;

    public:
        SinglyCL();

        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyCL::SinglyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

void SinglyCL::Display()
{
    
    if(First == NULL && Last == NULL)
    {
        cout << "Linked list is empty" << endl;
        return;
    }

    PNODE temp = First;  // Use a temporary pointer to traverse the list

    do
    {
        cout << "|" << temp->data << "|->";
        temp = temp->next;
    } while (temp != Last->next);
    
    cout << endl;

}

int SinglyCL::Count()
{
    return iCount;
}

void SinglyCL::InsertFirst(int No)
{
    PNODE newn=NULL;
    newn=new NODE;
    newn->data=No;
    newn->next=NULL;

    if(First==NULL && Last==NULL)
    {
      First=newn;
      Last=newn;
    }
    else{
        newn->next=First;
        First=newn;

    }
    Last->next=First;
iCount++;


}

void SinglyCL::InsertLast(int No)
{
    PNODE newn=NULL;
    newn=new NODE;
    newn->data=No;
    newn->next=NULL;

    if(First==NULL && Last==NULL)
    {
      First=newn;
      Last=newn;
    }
    else{
        Last->next=newn;
        Last=newn;

    }
    Last->next=First;
iCount++;

}

void SinglyCL::InsertAtPos(int No, int iPos)
{
    int i=0;
    
    PNODE newn=NULL;
    PNODE temp=NULL;
    

    if((iPos<1)||(iPos>iCount+1))
    {
        printf("Invalid position\n");
        return;
    }
    if(iPos==1)
    {
        InsertFirst(No);
    }
    else if(iPos==iCount+1)
    {
         InsertLast(No);
    }
    else
    {
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=No;
        newn->next=NULL;

        temp= First;
        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;

        iCount++;
    }

}


void SinglyCL::DeleteFirst()
{
    if(First==NULL && Last==NULL)
    {
        return;
    }
    else if(First==Last)
    {
        delete First;
        First=NULL;
        Last=NULL;
    }
    else{

        First=First->next;
        delete Last->next;
        
    }
    Last->next=First;

    iCount--;
}

void SinglyCL::DeleteLast()
{
    PNODE temp=NULL;
    
    if(First==NULL && Last==NULL)
    {
        return;
    }
    else if(First==Last)
    {
        delete First;
        First=NULL;
        Last=NULL;
    }
    else{

        temp=First;

        while(temp->next!=Last)
        {
            temp=temp->next;
        }
        delete Last;
        Last=temp;
        
    }
    Last->next=First;

    iCount--;
}

void SinglyCL::DeleteAtPos(int iPos)
{
    int i=0;
    
    PNODE temp2=NULL;
    PNODE temp=NULL;
    

    if((iPos<1)||(iPos>iCount))
    {
        printf("Invalid position\n");
        return;
    }
    if(iPos==1)
    {
        DeleteFirst();
    }
    else if(iPos==iCount)
    {
         DeleteLast();
    }
    else
    {
        

        temp= First;
        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        temp2=temp->next;
        temp->next=temp2->next;
        free(temp2);

        iCount--;
    }
        
        
    }


int main()
{
    SinglyCL obj;
    int iRet=0;

        obj.InsertFirst(11);
        obj.InsertFirst(21);
        obj.InsertFirst(51);
        obj.InsertFirst(71);

        obj.InsertLast(110);
        obj.InsertLast(210);
        obj.InsertLast(510);
        obj.InsertLast(710);

        obj.Display();
        iRet=obj.Count();
        cout<<"count is "<<iRet<<endl;

        obj.DeleteFirst();

        obj.Display();
        iRet=obj.Count();
        cout<<"count is "<<iRet<<endl;
        
        obj.DeleteLast();

        obj.Display();
        iRet=obj.Count();
        cout<<"count is "<<iRet<<endl;
        
        obj.InsertAtPos(111,4);

        obj.Display();
        iRet=obj.Count();
        cout<<"count is "<<iRet<<endl;

        obj.DeleteAtPos(4);

        obj.Display();
        iRet=obj.Count();
        cout<<"count is "<<iRet<<endl;
        
        




    return 0;
}
