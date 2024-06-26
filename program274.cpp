#include<iostream>
using namespace std;//Approch 3

void Display(int iNo){

    static int i=1; 
    if(i<=iNo)
    {
       cout<<"*"<<endl;
       i++;
       Display(iNo);//recursive call
    }
    cout<<"end of display"<<endl;

}

int main()
{
    int iValue=0;

    cout<<"enter number"<<endl;
    cin>>iValue;


    Display(iValue);//function call

    return 0;
}