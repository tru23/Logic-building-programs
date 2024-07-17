#include<iostream>
using namespace std;

struct node{

    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node NODE;
typedef struct node *PNODE;

class DoublyCl
{
    private:
        PNODE First;
        PNODE Last;
        int iCount;

    public:
        DoublyCl();

        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No,int pos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int pos);

};

DoublyCl::DoublyCl()
{
    First=NULL;
    Last=NULL;
    iCount=0;

}
void DoublyCl::Display()
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

int DoublyCl::Count()
{
    return iCount;
}


void DoublyCl::InsertFirst(int No)
{
    PNODE newn=NULL;
    newn=new NODE;

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;
    
    if(First==NULL && Last==NULL)
    {
        First=newn;
        Last=newn;
    }
    else{

        newn->next=First;
        First->prev=newn;
        First=newn;

    }
    Last->next=First;
    First->prev=Last;

    iCount++;


}
void DoublyCl::InsertLast(int No)
{
    PNODE newn=NULL;
    newn=new NODE;

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;
    
    if(First==NULL && Last==NULL)
    {
        First=newn;
        Last=newn;
    }
    else{
        Last->next=newn;
        newn->prev=Last;
        Last=newn;
    }
    Last->next=First;
    First->prev=Last;

iCount++;
}


void DoublyCl::InsertAtPos(int No,int pos)
{
    PNODE newn=NULL;
    PNODE temp=NULL;
    int i=0;
    

    if(pos<1 || pos>iCount+1)
    {
        cout<<"Invalid position\n";
        return;

    }
    if(pos==1)
    {
        InsertFirst(No);

    }
    else if(pos==iCount+1)
    {
        InsertLast(No);
    }
    else{
        newn=new NODE;
        newn->data=No;
        newn->prev=NULL;
        newn->next=NULL;

        temp=First;
        for(i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        
        newn->next=temp->next;
        temp->next->prev=newn;
        temp->next=newn;
        newn->prev=temp;

        iCount++;

    }
    
}

void DoublyCl::DeleteFirst()
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
    else
    {
        First=First->next;
        delete Last->next;
        Last->next=First;
        First->prev=Last;

    }
    iCount--;
    
}

void DoublyCl::DeleteLast()
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
    else
    {
        Last=Last->prev;
        delete First->prev;

        Last->next=First;
        First->prev=Last;

    }
    iCount--;
    
}

void DoublyCl::DeleteAtPos(int pos)
{
    PNODE temp=NULL;
   
    int i=0;

    if(pos<1 || pos>iCount)
    {
        cout<<"Invalid position\n";
        return;

    }
    if(pos==1)
    {
        DeleteFirst();

    }
    else if(pos==iCount)
    {
        DeleteLast();
    }
    else{
        temp=First;

        for(i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        delete temp->next->prev;
        temp->next->prev=temp;

        iCount--;
        
    }
    
    
}


int main()
{
    DoublyCl obj;
    int iRet=0;

    obj.InsertFirst(11);
    obj.InsertFirst(21);
    obj.InsertFirst(51);
    obj.InsertFirst(61);
    obj.InsertFirst(71);
    obj.InsertFirst(81);

    obj.InsertLast(110);
    obj.InsertLast(120);
    obj.InsertLast(130);

    obj.Display();
    iRet=obj.Count();
    cout<<"Count is "<<iRet<<endl;

    obj.DeleteFirst();
   

    obj.Display();
    iRet=obj.Count();
    cout<<"Count is "<<iRet<<endl;

    obj.DeleteLast();
   

    obj.Display();
    iRet=obj.Count();
    cout<<"Count is "<<iRet<<endl;

    
    obj.InsertAtPos(111,3);
   

    obj.Display();
    iRet=obj.Count();
    cout<<"Count is "<<iRet<<endl;

    obj.DeleteAtPos(3);
   

    obj.Display();
    iRet=obj.Count();
    cout<<"Count is "<<iRet<<endl;



    return 0;
}