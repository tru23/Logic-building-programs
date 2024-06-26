#include <iostream>
using namespace std;

int Display(int iNo)
{
    
     static int count=0;
   
    if (iNo!=0)
    {
        count++;
        iNo=iNo/10;
        Display(iNo);
    }
return count;
    
}

int main()
{
    int iValue = 0;
    int iRet=0;
    cout << "enter number" << endl;
    cin >> iValue;

   iRet=Display(iValue); // function call
   cout<<"count is "<<iRet<<endl; 

    return 0;
}