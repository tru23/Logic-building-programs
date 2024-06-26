#include<iostream>


using namespace std;

bool strcmpX(char* First ,char *Second)
{
  
    
    while((*First!='\0')&&(*Second !='\0'))
    {
        if(*First != *Second)
        {
            break;
        }
        First++;
        Second++;
        
    }
    if((*First=='\0')&&(*Second =='\0'))
    {
        return true;
    }
    else
    {
        return false;
    }

 
}

int main()
{

    char Arr[30];
    char Brr[30];
    bool bRet="false";
    cout<<"enter the first string"<<endl;
    cin.getline(Arr,30);

    cout<<"enter the second string"<<endl;
    cin.getline(Brr,30);

     bRet=strcmpX(Brr,Arr); 
     if(bRet==true)
     {
        cout<<"Strings are identical"<<endl;
     }
     else{
        cout<<"strings are different"<<endl;
     }

    return 0;

}