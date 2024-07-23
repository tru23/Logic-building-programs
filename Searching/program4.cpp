#include <iostream>
using namespace std;   //Binary search accending order
template <class T>
class ArrayX
{
public:
    T *arr;
    int iSize;

    ArrayX(int Value);
    ~ArrayX();
    void Display();
    void Accept();
     bool LinearSearch(T Value);
     bool BidirectionalSearch(T Value);
     bool BinarySearch(T Value);


    
};
    template <class T>
    ArrayX<T>::ArrayX(int Value)
    {
        this->iSize = Value;
        this->arr = new T[iSize];
    }
     template <class T>
    ArrayX<T>::~ArrayX()
    {
        delete []arr;
    }
    template <class T>
    void ArrayX<T>::Display()
    {
        int i = 0;
        cout << "entered elements are:\n";

        for (i = 0; i < iSize; i++)
        {
            cout << arr[i] << endl;
        }
    }
    template <class T>

    void ArrayX<T>::Accept()
    {
        int i = 0;
        cout << "enter the elements\n";

        for (i = 0; i < iSize; i++)
        {
            cin >> arr[i];
        }
    }
    template<class T>
    bool ArrayX<T>:: LinearSearch(T Value)
    {
        int i=0;
        for(i=0;i<iSize;i++)
        {
            if(Value==arr[i])
            {
                return true;
            }
            
        }
        return false;
        
    }
    template<class T>
    bool ArrayX<T>:: BidirectionalSearch(T Value)
    {
        int i=0;
        int end=iSize-1;
        int start=0;
        
        for(i=start;i<=end;i++)
        {
            if(arr[i]==Value)
            {
               return true;
               
            }
            start++;
            end--;
            
        }
        return false;
        
    }
    template<class T>
     bool ArrayX<T>:: BinarySearch(T Value)
     {
        int start=0;
        int end=iSize-1;

        int mid=0;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(arr[mid]==Value||arr[start]==Value||arr[end]==Value)
            {
                return true;
                break;
            }
            else if(Value>arr[mid])
            {
                start=mid+1;
            }
            else if(Value<arr[mid])
            {
                end=mid-1;
            }

        }
        return false;
     }
    

    int main()
    {
        int iLength = 0;
        int *Arr = NULL;
        int iValue=0;
        bool bRet=false;
    

        cout << "enter number of elements you want in array" << endl;
        cin >> iLength;

        Arr = new int[iLength];

        ArrayX<int> *obj= new ArrayX<int>(iLength);

        obj->Accept();
        obj->Display();

        cout<<"enter element to search\n";
        cin>>iValue;

        

        bRet=obj->BinarySearch(iValue);
        if(bRet==true)
        {
            cout<<"Present\n";
        }
        else{
            cout<<"Not Present";
        }

        

        delete obj;

      

        return 0;
    }