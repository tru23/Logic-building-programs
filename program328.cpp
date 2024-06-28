#include<iostream>
using namespace std;

//this approch is also corect but next program is industry used 
//so function should be declare inside class and define outside only in c++
//refer 329.cpp

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

class SinglyLL{

    public :
        PNODE First;
        int iCount;

        SinglyLL(){
            cout<<"inside instructor\n"<<endl;
            First=NULL;
            iCount=0;
        }


};

int main()
{
    SinglyLL obj;//object created for class

    return 0;
}