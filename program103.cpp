#include<iostream>
using namespace std;

int strLenX(char *str)
{

int count=0;
while(*str != '\0')
{
  count++;
  str++;
}
return count;
}

int main()
{
    char Arr[30];
    int iRet=0;
    cout<<"Enetr your name"<<endl;
    cin>>Arr;

    iRet=strLenX(Arr);
    cout<<"Length of string is:"<<iRet<<endl;
    return 0;

}