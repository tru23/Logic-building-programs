#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int iRet=0;
    char Arr[30]="Hello world";
    char Brr[30];
    strcpy(Brr,Arr);
    iRet=strlen(Arr);
    

    cout<<"length is "<<iRet<<endl;

    cout<<"destination string is "<<Brr<<endl;
    return 0;

}