#include<iostream>
using namespace std;

struct node{

    int data;
    struct node *next;

};
typedef struct node NODE;
typedef struct node *PNODE;

class Stack
{
    private:
        PNODE First;
        
        int iCount;

    public:
        Stack();
        void Display();
        int Count();

        int Push(int No);//its insert first;
        int Pop();  
};

Stack::Stack()
{
    First=NULL;
    iCount=0;

}
void  Stack::Display()
{
    cout<<"Elements of stack are:\n";
    PNODE temp=First;

    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;

    }

}
int Stack::Count()
{
    return iCount;
}

int Stack::Push(int No)//its insert first;
{
    PNODE newn=NULL;
    newn=new NODE;

    newn->data=No;
    newn->next=NULL;

    if(First==NULL)
    {
        First=newn;

    }
    else
    {
        newn->next=First;
        First=newn;
    }
    return No;
iCount++;
}
int Stack::Pop()//delete first
{
    int iValue=0;
    PNODE temp=NULL;
    if(First==NULL)
    {
        cout<<"Unable to pop as stack is empty\n";
        return -1;
    }
    else{
        temp=First;

        iValue=First->data;
        First=First->next;
        delete temp;

        iCount--;
    }
    return iValue;

} 
int main()
{
    Stack obj;
    int iRet=0;

    obj.Push(10);
     obj.Push(20);
      obj.Push(30);
       obj.Push(40);
        obj.Push(50);

        obj.Display();

        iRet=obj.Count();
        cout<<"Number of elements in stack are "<<iRet<<endl;

        iRet=obj.Pop();
        cout<<"poped element is"<<iRet<<endl;

        obj.Display();

        iRet=obj.Push(70);

                obj.Display();
                
        cout<<"pushed element is"<<iRet<<endl;
    
    return 0;
}
