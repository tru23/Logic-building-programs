#include <iostream>
using namespace std;

class ArrayX
{
public:
    int *arr;
    int iSize;

    ArrayX(int Value)
    {
        this->iSize = Value;
        this->arr = new int[iSize];
    }
    ~ArrayX()
    {
        delete []arr;
    }
    void Display()
    {
        int i = 0;
        cout << "entered elements are:\n";

        for (i = 0; i < iSize; i++)
        {
            cout << arr[i] << endl;
        }
    }

    void Accept()
    {
        int i = 0;
        cout << "enter the elements\n";

        for (i = 0; i < iSize; i++)
        {
            cin >> arr[i];
        }
    }
};

    int main()
    {
        int iLength = 0;
        int *Arr = NULL;
        cout << "enter number of elements you want in array" << endl;
        cin >> iLength;

        Arr = new int[iLength];

        ArrayX *obj= new ArrayX(iLength);

        obj->Accept();
        obj->Display();

        delete obj;

      

        return 0;
    }