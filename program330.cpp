#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyLL
{
    private:
        PNODE First;
        int iCount;

    public:
        DoublyLL();

        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);        
        void InsertAtPos(int No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

DoublyLL::DoublyLL()
{
    cout<<"inside constructor"<<endl;
    First=NULL;
    iCount=0;
}

void DoublyLL::Display()
{

    PNODE temp = NULL;
    temp=First;
    cout<<"\nNULL<->";
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<"|<-> ";
        temp = temp -> next;
    }
    cout<<"NULL\n";
}

int DoublyLL::Count()
{
    return iCount;
}

void DoublyLL::InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new NODE;    // malloc

    newn->data = No;
    newn->prev = NULL;
    newn->next = NULL;
    

    if(First == NULL) // if(iCount == 0)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First->prev=newn;//$
        First = newn;
    }
    iCount++;
}


void DoublyLL::InsertLast(int No)
{
    PNODE newn = NULL;
    PNODE temp=First;

    newn = new NODE;    // malloc

    newn->data = No;
    newn->prev = NULL;
    newn->next = NULL;
    

    if(First == NULL) // if(iCount == 0)
    {
        First = newn;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp;//$

    }
    iCount++;
}



void DoublyLL::InsertAtPos(int No, int iPos)
{
    int iLength=0;
    iLength=Count();
     int i=0;
    PNODE newn =NULL;
    PNODE temp1=NULL;
    
    PNODE temp2=NULL;
    

    if((iPos<1)||(iPos>iLength+1))//filter
    {
       cout<<"INVALID"<<endl;
        return;
    }
    if(iPos==1)//CASE 1
    {
        InsertFirst(No);
    }
    else if(iPos==iLength+1)
    {
        InsertLast(No);
    }
    else{
        newn=new NODE;
        newn->data=No;
        newn->next=NULL;
        newn->prev=NULL;//$

        temp1=First;
        for(i=1;i<iPos-1;i++)
        {
            temp1=temp1->next;
        }
       temp2=temp1->next;
       newn->next=temp2;
       temp2->prev=newn;
       temp1->next=newn;
       newn->prev=temp1;

       iCount++;
        
    }
}

void DoublyLL::DeleteFirst()
{
   PNODE temp = First;

    if(First == NULL)
    {
        cout<<"LL is empty\n";
        return;
    }
    else if(First -> next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        First=temp->next;
        First->prev=NULL;
        delete temp;
    }
    iCount--;
} 


void DoublyLL::DeleteLast()
{
     PNODE temp = First;

    if(First == NULL)
    {
        cout<<"LL is empty\n";
        return;
    }
    else if(First -> next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    iCount--;
} 


void DoublyLL::DeleteAtPos(int iPos)
{

     int iLength=0;
    iLength=Count();
     int i=0;
   
    PNODE temp1=NULL;
    
    PNODE temp2=NULL;
    

    if((iPos<1)||(iPos>iLength))//filter
    {
       cout<<"INVALID"<<endl;
        return;
    }
    if(iPos==1)//CASE 1
    {
        DeleteFirst();
    }
    else if(iPos==iLength)
    {
        DeleteLast();
    }
    else{
        
        temp1=First;
        for(i=1;i<iPos-1;i++)
        {
            temp1=temp1->next;
        }

        temp2=temp1->next;
        temp1->next=temp2->next;
        temp2->next->prev=temp1;
        delete temp2;

      

       iCount--;
        
    }
}

int main()
{
    DoublyLL obj;
    int iRet=0;

    obj.InsertFirst(11);
    obj.InsertFirst(21);
    obj.InsertFirst(51);

    obj.Display();
    iRet=obj.Count();
    cout<<"number of elements are:"<<iRet<<endl;

    obj.InsertLast(110);
    obj.InsertLast(121);
    obj.InsertLast(151);
    obj.InsertLast(210);
    obj.InsertLast(221);
    obj.InsertLast(251);

    obj.Display();
    iRet=obj.Count();
    cout<<"number of elements are:"<<iRet<<endl;

    obj.DeleteFirst();

    obj.Display();
    iRet=obj.Count();
    cout<<"number of elements are:"<<iRet<<endl;

    obj.DeleteLast();

    obj.Display();
    iRet=obj.Count();
    cout<<"number of elements are:"<<iRet<<endl;

    obj.InsertAtPos(81,5);

    obj.Display();
    iRet=obj.Count();
    cout<<"number of elements are:"<<iRet<<endl;

    obj.DeleteAtPos(5);

    obj.Display();
    iRet=obj.Count();
    cout<<"number of elements are:"<<iRet<<endl;


    
    return 0;
}