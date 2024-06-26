#include<iostream>
using namespace std;




int main()
{
    int iLength = 0,
    i = 0;
    int *ptr = NULL;

    cout<<"Enter number of elements that you want to store : "<<endl;
    cin>>iLength;

    ptr = new int[iLength];// in C = ptr=(int*)malloc(sizeof(int)*ilength);

    cout<<"Enter the elements : "<<endl;
    for(i = 0; i < iLength; i++)
    {
        cin>>ptr[i];
    }
 
 
    
    delete []ptr;//in C free(ptr);

    return 0;
}