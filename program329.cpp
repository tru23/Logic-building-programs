#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;//yachi kahi garaj nahi C++ madhe .jar C madhe kela tarch 2 pointer lagtat

class SinglyLL{

    private :
        PNODE First;
        int iCount;
    public:
    SinglyLL();

    void Display();
    int Count();

    void InsertFirst(int No);
    void InsertLast(int No);
    void InsertAtPos(int No,int iPos);
    
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos); 
        
};
//syntax
// return type class name::Function name()

SinglyLL::SinglyLL()//scope resolution it shows for which class it is made 
{
    cout<<"inside instructor\n"<<endl;
    First=NULL;
    iCount=0;
}

void SinglyLL::Display()
{
    PNODE temp=First;

    while(temp!=NULL)
    {
      
       cout<<"|"<<temp->data<<"|->";
        temp=temp->next;
    }
    cout<<"NULL\n";
    

}

int SinglyLL::Count()
{
    return iCount;
}

void SinglyLL::InsertFirst(int No)
{
    PNODE newn=NULL;
    newn=new NODE;//in C use malloc

    newn->data=No;
    newn->next=NULL;

    if(First==NULL)//OR count==0
    {
       First=newn;

    }
    else
    {
        newn->next=First;
        First=newn;
    }
    iCount++;
}

void SinglyLL::InsertLast(int No)
{
    PNODE newn=NULL;
    newn=new NODE;//in C use malloc

    PNODE temp=First;

    newn->data=No;
    newn->next=NULL;

    if(First==NULL)//OR count==0
    {
       First=newn;

    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;

        
    }
    iCount++;
    
}

void SinglyLL::InsertAtPos(int No,int iPos)
{
    PNODE newn=NULL;
    PNODE temp;
    int i=0;
    if((iPos<1)||(iPos>iCount+1))
    {
        cout<<"INVALID POSITION"<<endl;
        return;
    }
    if(iPos==1)
    {
        InsertFirst(No);
    }
    else if (iPos==iCount+1)
    {
        InsertLast(No);
    }
    else{
        temp=First;
        newn =new NODE;

        newn->data=No;
        newn->next=NULL;
        

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;

        iCount++;
    }

    
}

void SinglyLL::DeleteFirst()
{
    PNODE temp=First;

    if(First==NULL)
    {
        cout<<"LL IS empty"<<endl;
        return;
    }
    else if(First->next==NULL)
    {
        delete First;//in c we write free()
        First=NULL;
    }
    else
    {
        First=temp->next;
        delete temp;
        
    }
    iCount--;
    
}

void SinglyLL::DeleteLast()
{
    PNODE temp=First;

    if(First==NULL)
    {
        cout<<"LL IS empty"<<endl;
        return;
    }
    else if(First->next==NULL)
    {
        delete First;//in c we write free()
        First=NULL;
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

void SinglyLL::DeleteAtPos(int iPos)
{
    PNODE temp1=NULL;
     PNODE temp2=NULL;
    int i=0;
    if((iPos<1)||(iPos>iCount))
    {
        cout<<"INVALID POSITION"<<endl;
        return;
    }
    if(iPos==1)
    {
        DeleteFirst();
    }
    else if (iPos==iCount)
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
        delete temp2;

        iCount--;
    }
    
}

int main()
{
    SinglyLL obj;//object created for class
    

    int iRet=0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    obj.InsertLast(103);
    obj.InsertLast(112);
    obj.InsertLast(105);
    

    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    obj.InsertAtPos(120,5);

    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;

   obj.DeleteAtPos(5);

    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    return 0;
}