#include<iostream>

using namespace std;

void strcpyX(char* Dest ,char *Src)
{
    while(*Src!='\0')
    {
        *Dest = *Src;

        Src++;
        Dest++;
    }
*Dest='\0';
}


int main()
{

    char Arr[30]="Hello";
    char Brr[30];
    
   strcpyX(Brr,Arr);//strcpy(200,100) adress passing



    cout<<"copied string is "<<Brr<<endl;
    return 0;

}