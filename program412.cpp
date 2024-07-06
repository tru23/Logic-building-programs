#include<iostream>
using namespace std;
template<class T>
T Maximum(T Arr[],int iSize)
{
    T Max=Arr[0];
    int i=0;
    for(i=0;i<iSize;i++)
    {
        if(Max<Arr[i])
        {
            Max=Arr[i];
        }
    }
    return Max;

}

int main()
{
    int iLength=0;
    float *ptr=NULL;
    float Ret=0.0f;

    cout<<"enter number of elements :\n";
    cin>>iLength;

    ptr=new float [iLength];

    cout<<"enter number"<<endl;

    for(int i=0;i<iLength;i++)
    {
        cin>>ptr[i];
    }
cout<<"entered elements are:"<<endl;
    for(int i=0;i<iLength;i++)
    {
        cout<<ptr[i]<<endl;
    }

    Ret=Maximum(ptr,iLength);
    cout<<"addition is:"<<Ret;

    delete []ptr;

    return 0;
}