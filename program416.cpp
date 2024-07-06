#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
    public:
    T *Arr;
    int iSize;

    ArrayX(int no)
    {
        iSize=no;
        Arr=new T [iSize];
    }

    ~ArrayX()
    {
        delete[]Arr;
    }

    void Accept()
    {
        int i=0;
        cout<<"Enter the elements:\n";
        for(i=0;i<iSize;i++)
        {
            cin>>Arr[i];
        }

    }

    void Display()
    {
        int i=0;
        cout<<"entered elements are: \n";
        for(i=0;i<iSize;i++)
        {
            cout<<Arr[i]<<endl;
        }

    }
    int Addition()
    {
        T sum=0;
        int i=0;
        for(i=0;i<iSize;i++)
        {
            sum=sum+Arr[i];
        }

        return sum;
    }

};
int main()
{
   ArrayX <int>aobj(5);// or <float>
   int iRet=0;          //float fRet=0.0f

   aobj.Accept();
   aobj.Display();
   iRet=aobj.Addition();//fRet
   cout<<"addition is :"<<iRet<<endl;//fRet

   return 0;


}
