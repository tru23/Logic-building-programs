//GENERIC LL and doubly circular generic with chnage of node as nodeDC

#include<iostream>
using namespace std;

template <class T>
struct nodeDC{

    T data;
    struct nodeDC<T> *next;
    struct nodeDC<T> *prev;
};
//typedef struct node NODE;
//typedef struct node *PNODE;

template <class T>
class DoublyCl
{
    private:
        struct nodeDC<T> * First;
        struct nodeDC<T> * Last;
        int iCount;

    public:
        DoublyCl();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No,int pos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int pos);

};
template <class T>
DoublyCl<T>::DoublyCl()
{
    First=NULL;
    Last=NULL;
    iCount=0;

}
template <class T>
void DoublyCl<T>::Display()
{
    if(First==NULL && Last==NULL)
    {
        cout<<"Linkedlist is empty";
        return;
    }
    
    do
    {
        cout<<"|"<<First->data<<"|<->";
        First=First->next;
    } while (Last->next!=First);

    cout<<endl;
    

}
template <class T>
int DoublyCl<T>::Count()
{
    return iCount;
}

template <class T>
void DoublyCl<T>::InsertFirst(T No)
{
    struct nodeDC<T> * newn=NULL;
    newn=new struct nodeDC<T> ;

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
template <class T>
void DoublyCl<T>::InsertLast(T No)
{
    struct nodeDC<T> * newn=NULL;
    newn=new struct nodeDC<T> ;

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

template <class T>
void DoublyCl<T>::InsertAtPos( T No,int pos)
{
    struct nodeDC<T> * newn=NULL;
    struct nodeDC <T>* temp=NULL;
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
        newn=new struct nodeDC <T> ;
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
template <class T>
void DoublyCl<T>::DeleteFirst()
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
template <class T>
void DoublyCl<T>::DeleteLast()
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
template <class T>
void DoublyCl<T>::DeleteAtPos(int pos)
{
    struct nodeDC<T> * temp=NULL;
   
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
    DoublyCl<int> *iobj=new DoublyCl<int>();
    int iRet=0;

    iobj->InsertFirst(11);
     iobj->InsertFirst(21);
     iobj->InsertFirst(51);
     iobj->InsertFirst(61);
    iobj->InsertFirst(71);
    iobj->InsertFirst(81);

     iobj->InsertLast(110);
     iobj->InsertLast(120);
     iobj->InsertLast(130);

    iobj->Display();
    iRet= iobj->Count();
    cout<<"Count is "<<iRet<<endl;

     iobj->DeleteFirst();
   

     iobj->Display();
    iRet= iobj->Count();
    cout<<"Count is "<<iRet<<endl;

     iobj->DeleteLast();
   

     iobj->Display();
    iRet= iobj->Count();
    cout<<"Count is "<<iRet<<endl;

    
     iobj->InsertAtPos(111,3);
   

    iobj->Display();
    iRet= iobj->Count();
    cout<<"Count is "<<iRet<<endl;

    iobj->DeleteAtPos(3);
   

     iobj->Display();
    iRet= iobj->Count();
    cout<<"Count is "<<iRet<<endl;



    return 0;
}