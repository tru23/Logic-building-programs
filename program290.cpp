#include <iostream>
using namespace std;

void DisplayFact(int iNo)//iterative
{
    int i=1;
  while(i<iNo)
  {
    if(iNo%i==0)
    {
        cout<<i<<endl;
        
    }
    i++;
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