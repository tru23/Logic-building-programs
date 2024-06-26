#include<iostream>
using namespace std;//Approch 3

void Display(int iNo){

  
    while(iNo>0)
    {
       cout<<iNo<<endl;
       iNo--;
       
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