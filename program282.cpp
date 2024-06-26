#include <iostream>
using namespace std;

int Display(int iNo)
{
    int iDigit = 0;
   
    while (iNo!=0)
    {
        iDigit=iNo%10;
        cout<<iDigit<<endl;
        iNo=iNo/10;
        
    }

    
}

int main()
{
    int iValue = 0;
    
    cout << "enter number" << endl;
    cin >> iValue;

   Display(iValue); // function call
    

    return 0;
}