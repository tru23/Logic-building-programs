
#include<iostream>

using namespace std;//Approch
void Display(){

    auto  i=1; 
    if(i<=4)
    {
       cout<<"*"<<endl;
       i++;
       Display();//recursive call
    }

}
int main(){


    Display();//function call

    return 0;
}