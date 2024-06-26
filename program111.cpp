#include<iostream>


using namespace std;

void strcatX(char* Dest ,char *Src)
{
    while(*Dest!='\0')
    {
        
        Dest++;
    }
    while(*Src!='\0')
    {
        *Dest=*Src;
        Dest++;
        Src++;
    }

*Dest='\0';
}


int main()
{

    char Arr[30];
    char Brr[30]="Hello";
    cout<<"enter the source string"<<endl;
    cin.getline(Arr,30);

   strcatX(Brr,Arr); 



    cout<<"copied string is "<<Brr<<endl;
    return 0;

}