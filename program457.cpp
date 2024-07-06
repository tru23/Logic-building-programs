#include<iostream>
using namespace std;

//CODE FOR SINGLY LINEAR

template <class T>
struct nodeSL
{
    T data;
    struct nodeSL *next;
};

//typedef struct node NODE;// we cannot use in generic
//typedef struct node *PNODE;//we cannot use in generic
//typedef struct node **PPNODE;//yachi kahi garaj nahi C++ madhe .jar C madhe kela tarch 2 pointer lagtat

template <class T>
class SinglyLL{

    private :
        struct nodeSL<T> *First;
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
    struct nodeSL<T>* temp=First;

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
    struct nodeSL<T> * newn=NULL;
    newn=new struct nodeSL<T>;//in C use malloc

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
    struct nodeSL<T> * newn=NULL;
    newn=new struct nodeSL<T> ;//in C use malloc

    struct nodeSL <T>* temp=First;

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
    struct nodeSL<T> * newn=NULL;
    struct nodeSL <T>* temp;
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
        newn =new struct nodeSL <T>;

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
    struct nodeSL <T>* temp=First;

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
    struct nodeSL <T>* temp=First;

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
    struct nodeSL<T>* temp1=NULL;
     struct nodeSL<T>* temp2=NULL;
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


//CODE FOR DOUBLY CIRCULAR

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
    
    //SinglyLL <int> obj;//object created for class
    cout<<"------------LL of INTGER-----------------"<<endl;
   SinglyLL <int>*iobj =new SinglyLL<int>(); //dynamic 

    int iRet=0;

    iobj->InsertFirst(51); //arrow because it is pointer
    iobj->InsertFirst(21);
    iobj->InsertFirst(11);

    iobj->Display();
    iRet=iobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobj->InsertLast(103);
    iobj->InsertLast(112);
    iobj->InsertLast(105);
    

    iobj->Display();
    iRet=iobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    iobj->InsertAtPos(120,5);

    iobj->Display();
    iRet=iobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

   iobj->DeleteAtPos(5);

    iobj->Display();
    iRet=iobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

//-----------------------------------------------------------------
    cout<<"------------LL of CHAR-----------------"<<endl;
    SinglyLL <char>*cobj =new SinglyLL<char>(); //dynamic 

    cobj->InsertFirst('a'); //arrow because it is pointer
    cobj->InsertFirst('b');
    cobj->InsertFirst('c');

    cobj->Display();
    iRet=cobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cobj->InsertLast('A');
    cobj->InsertLast('B');
    cobj->InsertLast('C');
    

    cobj->Display();
    iRet=cobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    cobj->InsertAtPos('Z',5);

    cobj->Display();
    iRet=cobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

   cobj->DeleteAtPos(5);

    cobj->Display();
    iRet=cobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;
//-----------------------------------------------------------------
    cout<<"------------LL of FLOAT-----------------"<<endl;
    SinglyLL <float>*fobj =new SinglyLL<float>(); //dynamic 

    fobj->InsertFirst(67.90); //arrow because it is pointer
    fobj->InsertFirst(34.9);
    fobj->InsertFirst(1.98);

    fobj->Display();
    iRet=fobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    fobj->InsertLast(12.09);
    fobj->InsertLast(24.98);
    fobj->InsertLast(45.87);
    

    fobj->Display();
    iRet=fobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    fobj->InsertAtPos(45.45,5);

    fobj->Display();
    iRet=fobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

   fobj->DeleteAtPos(5);

    fobj->Display();
    iRet=fobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;
//-----------------------------------------------------------------
   cout<<"------------LL of DOUBLE-----------------"<<endl;
    SinglyLL <double>*dobj =new SinglyLL<double>(); //dynamic 

    dobj->InsertFirst(67.90); //arrow because it is pointer
    dobj->InsertFirst(34.9);
    dobj->InsertFirst(1.98);

    dobj->Display();
    iRet=dobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    dobj->InsertLast(12.09);
    dobj->InsertLast(24.98);
    dobj->InsertLast(45.87);
    

    dobj->Display();
    iRet=dobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    dobj->InsertAtPos(45.45,5);

    dobj->Display();
    iRet=dobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

   dobj->DeleteAtPos(5);

    dobj->Display();
    iRet=dobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


//-------------------------------------------------------------
 DoublyCl<int> *idobj=new DoublyCl<int>();
    int idRet=0;

    idobj->InsertFirst(11);
     idobj->InsertFirst(21);
     idobj->InsertFirst(51);
     idobj->InsertFirst(61);
    idobj->InsertFirst(71);
    idobj->InsertFirst(81);

     idobj->InsertLast(110);
     idobj->InsertLast(120);
     idobj->InsertLast(130);

    idobj->Display();
    idRet= idobj->Count();
    cout<<"Count is "<<idRet<<endl;

     idobj->DeleteFirst();
   

     idobj->Display();
    idRet= idobj->Count();
    cout<<"Count is "<<idRet<<endl;

     idobj->DeleteLast();
   

     idobj->Display();
    idRet= idobj->Count();
    cout<<"Count is "<<idRet<<endl;

    
     idobj->InsertAtPos(111,3);
   

    idobj->Display();
    idRet= idobj->Count();
    cout<<"Count is "<<idRet<<endl;

    idobj->DeleteAtPos(3);
   

     idobj->Display();
    idRet= idobj->Count();
    cout<<"Count is "<<idRet<<endl;




    return 0;
}