#include <iostream>
using namespace std;
template <class T>
class ArrayX        //eficient bubble sort
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

     void BubbleSort();


    
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
        cout << "entered elements are:\t";

        for (i = 0; i < iSize; i++)
        {
            cout << arr[i]<<"\t";
        }
        cout<<endl;
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
                end=mid-1;
            }
            else if(Value<arr[mid])
            {
                start=mid+1;
            }

        }
        return false;
     }
    template<class T>
     void ArrayX <T>::BubbleSort()
     {
        T temp;
        int i=0,j=0;
        bool flag=false;

        //   1      2    3
        for(i=0;i<iSize-1;i++)
        {
            flag=false;

            for(j=0;j<iSize-1-i;j++)
            {
                if(arr[j]>arr[j+1]) //inner
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    flag=true;
                }
            }
            if(flag==false)
            {
                break;
            }
            cout<<"Array after passs:"<<i+1<<"\n";
            Display();

        }

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
        cout<<"Before sorting"<<endl;
        obj->Display();

        
        obj->BubbleSort();
        cout<<"After sorting"<<endl;
        obj->Display();




       

        

        delete obj;

      

        return 0;
    }