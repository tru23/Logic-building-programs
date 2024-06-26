#include<iostream>
using namespace std;

int main()
{
    int *Arr=NULL;
    int iCount=0,i=0;
    cout<<"enter number of elements :"<<endl;
    cin>>iCount;

    Arr=new int[iCount];
    cout<<"enter the elements:"<<endl;
    for(i=0;i<iCount;i++)
    {
        cin>>Arr[i];

    }
    cout<<"enter elements:"<<endl;
    for(i=0;i<iCount;i++)
    {
        cout<<Arr[i]<<endl;
    }
    delete[]Arr;

    return 0;
}