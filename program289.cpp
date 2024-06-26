#include <iostream>
using namespace std;

void DisplayFact(int iNo)//iterative
{
    int i=0;
  for(i=1;i<=iNo;i++)
  {
    if(iNo%i==0)
    {
        cout<<i<<endl;
    }
  }
    
}

int main()
{
    int iValue = 0;
   
    cout << "enter number" << endl;
    cin >> iValue;

   DisplayFact(iValue); // function call
  

    return 0;
}