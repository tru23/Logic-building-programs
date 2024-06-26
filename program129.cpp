
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

    int SumDigit(int iNo)
    {
        int sum = 0;
     
            while (iNo != 0)
            {
                sum=sum+(iNo%10);//(sum+idigit) that is int idigit=iNo%10
                iNo = iNo / 10;
            }
        return sum;

    }

    void SumDigitsDisplay()
    {
        int i=0,iRet=0;

        for(i=0;i<iSize;i++)
        {
            iRet=SumDigit(Arr[i]);
            cout<<Arr[i]<<" Digit sum is  "<<iRet<<endl;
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
    aobj->SumDigitsDisplay();

    delete aobj;

    return 0;
}