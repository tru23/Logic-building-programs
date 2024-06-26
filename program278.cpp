#include<iostream>
using namespace std;//Approch 3

void Display(int iNo){

     
    if(iNo>=1)
    {
       cout<<iNo<<endl;
       iNo--;
       Display(iNo);//recursive call
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