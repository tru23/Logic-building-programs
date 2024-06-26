#include<iostream>
using namespace std;

int CountEven(int Arr[],int iSize)
{
    int i=0;
    int iCount=0;
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]%2==0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int *Arr=NULL;
    int iCount=0,i=0,iRet=0;
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
    iRet=CountEven(Arr,iCount);
    cout<<"number of even elements "<<iRet<<endl;
    delete[]Arr;

    return 0;
}