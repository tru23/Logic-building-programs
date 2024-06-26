#include <iostream>
using namespace std;

int DisplayFact(int iNo)//iterative
{
    static int i=1;
    static int iSum=0;
  if(i<iNo)
  {
    if(iNo%i==0)
    {
        iSum=iSum+i;
        
        
    }
    i++;
    DisplayFact(iNo);
  }
  return iSum;
    
}

int main()
{
    int iValue = 0;
    int iRet=0;
   
    cout << "enter number" << endl;
    cin >> iValue;

   iRet=DisplayFact(iValue); // function call
  cout<<"sum is"<<iRet<<endl;

    return 0;
}