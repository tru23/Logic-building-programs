#include<iostream>
using namespace std;//Approch 3

void Display(int iNo){

    static int i=1; 
    while(i<=iNo)
    {
       cout<<i<<endl;
       i++;
       
    }

}

int main()
{
    int iValue=0;

    cout<<"enter number"<<endl;
    cin>>iValue;


    Display(iValue);//function call

    return 0;
}