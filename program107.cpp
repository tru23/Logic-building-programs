#include<iostream>


using namespace std;

void strcpysmallX(char* Dest ,char *Src)
{
    while(*Src!='\0')
    {
        if((*Src>='a')&&(*Src<='z'))
        {
            *Dest = *Src;
            Dest++;
        }
        Src++;
        
    }
*Dest='\0';
}


int main()
{

    char Arr[30]="Hello";
    char Brr[30];
    cout<<"enter the source string"<<endl;
    cin.getline(Arr,30);

   strcpysmallX(Brr,Arr);//strcpy(200,100) adress passing



    cout<<"copied string is "<<Brr<<endl;
    return 0;

}