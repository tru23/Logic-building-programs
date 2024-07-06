//GENERIC LL


#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

//typedef struct node NODE;// we cannot use in generic
//typedef struct node *PNODE;//we cannot use in generic
//typedef struct node **PPNODE;//yachi kahi garaj nahi C++ madhe .jar C madhe kela tarch 2 pointer lagtat

template <class T>
class SinglyLL{

    private :
        struct node<T> *First;
        int iCount;
    public:
    SinglyLL();

    void Display();
    int Count();

    void InsertFirst(T No);
    void InsertLast(T No);
    void InsertAtPos(T No,int iPos);
    
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos); 
        
};
//syntax
// return type class name::Function name()
template <class T>
SinglyLL<T>::SinglyLL()//scope resolution it shows for which class it is made 
{
    cout<<"inside instructor\n"<<endl;
    First=NULL;
    iCount=0;
}


template <class T>
void SinglyLL<T>::Display()
{
    struct node <T>* temp=First;

    while(temp!=NULL)
    {
      
       cout<<"|"<<temp->data<<"|->";
        temp=temp->next;
    }
    cout<<"NULL\n";
    

}
template <class T>
int SinglyLL<T>::Count()
{
    return iCount;
}
template <class T>
void SinglyLL<T>::InsertFirst(T No)
{
    struct node<T> * newn=NULL;
    newn=new struct node<T>;//in C use malloc

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
template <class T>
void SinglyLL<T>::InsertLast(T No)
{
    struct node<T> * newn=NULL;
    newn=new struct node<T> ;//in C use malloc

    struct node <T>* temp=First;

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
template <class T>
void SinglyLL<T>::InsertAtPos(T No,int iPos)
{
    struct node<T> * newn=NULL;
    struct node <T>* temp;
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
        newn =new struct node <T>;

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
template <class T>
void SinglyLL<T>::DeleteFirst()
{
    struct node <T>* temp=First;

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
template <class T>
void SinglyLL<T>::DeleteLast()
{
    struct node <T>* temp=First;

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
template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
    struct node <T>* temp1=NULL;
     struct node <T>* temp2=NULL;
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
    //SinglyLL <int> obj;//object created for class
   SinglyLL <int>*obj =new SinglyLL<int>(); //dynamic 

    int iRet=0;

    obj->InsertFirst(51); //arrow because it is pointer
    obj->InsertFirst(21);
    obj->InsertFirst(11);

    obj->Display();
    iRet=obj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    obj->InsertLast(103);
    obj->InsertLast(112);
    obj->InsertLast(105);
    

    obj->Display();
    iRet=obj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    obj->InsertAtPos(120,5);

    obj->Display();
    iRet=obj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

   obj->DeleteAtPos(5);

    obj->Display();
    iRet=obj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    return 0;
}