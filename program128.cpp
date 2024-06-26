
#include <iostream>
using namespace std;

class ArrayX // MODULAR Approch.
{
private:
    int *Arr;
    int iSize;

public:
    ArrayX(int No)
    {
        cout << "Inside constructor" << endl;
        iSize = No;
        Arr = new int[iSize];
    }

    ~ArrayX()
    {
        cout << "Inside destructor" << endl;
        delete[] Arr;
    }

    void Accept()
    {
        int i = 0;

        cout << "Enter the elements : " << endl;
        for (i = 0; i < iSize; i++)
        {
            cin >> Arr[i];
        }
    }

    void Display()
    {
        int i = 0;

        cout << "Elements are : " << endl;
        for (i = 0; i < iSize; i++)
        {
            cout << Arr[i] << endl;
        }
    }

    int CalculateDigit(int iNo)
    {
        int count = 0;
     
            while (iNo != 0)
            {
                count++;
                iNo = iNo / 10;
            }
        return count;

    }

    void DisplayDigitsCount()
    {
        int i=0,iRet=0;

        for(i=0;i<iSize;i++)
        {
            iRet=CalculateDigit(Arr[i]);
            cout<<Arr[i]<<" contains "<<iRet<< " digits in it"<<endl;
        }
    }
};

int main() // dyanamic memory allocation of object
{
    int iLength = 0;

    cout << "Enter the number of elements that you want to store : " << endl;
    cin >> iLength;

    ArrayX *aobj = new ArrayX(iLength);

    aobj->Accept();
    aobj->Display();
    aobj->DisplayDigitsCount();

    delete aobj;

    return 0;
}