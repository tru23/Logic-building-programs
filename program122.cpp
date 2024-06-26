#include<iostream>
using namespace std;

float Average(int Arr[],int iSize)
{
    int i=0;
    int iSum=0;
    for(i=0;i<iSize;i++)
    {
        iSum=iSum+Arr[i];

    }
    
    return ((float)(iSum)/(float)iSize);
}

int main()
{
    int iLength = 0, i = 0;
    float fRet=0.0f;
    int *ptr = NULL;

    cout<<"Enter number of elements that you want to store : "<<endl;
    cin>>iLength;

    ptr = new int[iLength];

    cout<<"Enter the elements : "<<endl;
    for(i = 0; i < iLength; i++)
    {
        cin>>ptr[i];
    }

    cout<<"Entered elements are : "<<endl;
    for(i = 0; i < iLength; i++)
    {
        cout<<ptr[i]<<endl; 
    }
    cout<<"entered elements are :"<<endl;
    for(i=0;i<iLength;i++)
    {
        cout<<ptr[i]<<endl;
    }

    fRet=Average(ptr,iLength);

    cout<<"Average is "<<fRet<<endl;

    delete []ptr;

    return 0;
} 