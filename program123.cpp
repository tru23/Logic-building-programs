#include <iostream>
using namespace std;

class ArrayX
{
public:
    int *Arr;
    int iSize;

    ArrayX(int No)
    {
        cout << "inside constructor" << endl;
        iSize = No;
        Arr = new int[iSize];
    }

    ~ArrayX()
    {
        cout << "inside distructor";
        delete[] Arr;
    }

    void Accept()
    {
        int i = 0;
        cout << "inside accept" << endl;
        cout << "Enter the elements : " << endl;
        for (i = 0; i < iSize; i++)
        {
            cin >> Arr[i];
        }
    }
    void Display()
    {
        int i = 0;
        cout<<"inside display"<<endl;
        cout << "Elements are : " << endl;
        for (i = 0; i < iSize; i++)
        {
            cout << Arr[i] << endl;
        }
    }
};

int main()
{
    int iLength = 0;
    cout << "enter the number of elements you want to store" << endl;
    cin >> iLength;

    ArrayX aobj(iLength);
    aobj.Accept();
    aobj.Display();
    return 0;
}