#include <iostream>
using namespace std;

void DisplayFact(int iNo)//iterative
{
    static int i=1;
  if(i<iNo)
  {
    if(iNo%i==0)
    {
        cout<<i<<endl;
        
    }
    i++;
    DisplayFact(iNo);
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