#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int iRet=0;
    char Arr[30]="Hello world";
    char Brr[30]="India";

    strcat(Brr,Arr);//first parameter is destination and seconnd is source
    
    

    
    cout<<"destination string is "<<Brr<<endl;
    return 0;

}