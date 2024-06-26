#include <iostream>
using namespace std;

int SumDigitI(int iNo)//iterative
{
    int iDigit=0;
    static int iSum=0;
   
    if (iNo!=0)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;
           
    }
return iSum;
    
}
int SumDigitR(int iNo)//recursive
{
    int iDigit=0;
    static int iSum=0;
   
    if (iNo!=0)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;
        SumDigitR(iNo);
    }
return iSum;
    
}

int main()
{
    int iValue = 0;
    int iRet=0;
    cout << "enter number" << endl;
    cin >> iValue;

   iRet=SumDigitR(iValue); // function call
   cout<<"sum is "<<iRet<<endl; 

    return 0;
}