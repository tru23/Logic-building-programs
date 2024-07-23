#include<iostream>
using namespace std;

void Display(int arr[],int iSize)
{
    int i=0;
    cout<<"entered elements are:\n";

    for(i=0;i<iSize;i++)
    {
        cout<<arr[i]<<endl;
    }

}

void Accept(int arr[],int iSize)
{
    int i=0;
 cout<<"enter the elements\n";

    for(i=0;i<iSize;i++)
    {
        cin>>arr[i];
    }
}
int main()
{
    int iLength=0;
  
    int i=0;
    int *Arr=NULL;
    cout<<"enter number of elements you want in array"<<endl;
    cin>>iLength;

    Arr=new int[iLength];

    Accept(Arr,iLength);
     Display(Arr,iLength);
    
    delete [] Arr;

    return 0;
}