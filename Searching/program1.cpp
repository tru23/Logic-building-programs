#include<iostream>
using namespace std;


int main()
{
    int iLength=0;
  
    int i=0;
    int *Arr=NULL;
    cout<<"enter number of elements you want in array"<<endl;
    cin>>iLength;

    

    Arr=new int[iLength];

    cout<<"enter the elements\n";

    for(i=0;i<iLength;i++)
    {
        cin>>Arr[i];
    }

    cout<<"entered elements are:\n";

    for(i=0;i<iLength;i++)
    {
        cout<<Arr[i]<<endl;
    }
    delete [] Arr;

    return 0;
}