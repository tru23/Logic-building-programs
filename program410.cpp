#include<iostream>
using namespace std;

template <class T>

void Swap (T &A,T &B)
{
    T Temp;
    Temp=A;
    A=B;
    B=Temp;
}

int main()
{
    int iValue1=10;
    int iValue2=20;

    cout<<"original: " <<iValue1<<endl;
    cout<<"original: "<<iValue2<<endl;

   Swap(iValue1,iValue2);
    cout<<"swapping: "<<iValue1<<endl;
    cout<<"swapping : "<<iValue2<<endl;

    return 0;
}