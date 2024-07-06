#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
    public:
    T *Arr;
    int iSize;

    ArrayX(int no);
     ~ArrayX();
      void Accept();
      void Display();
      T Addition();

};
template<class T>
ArrayX<T>::ArrayX(int no)
    {
        iSize=no;
        Arr=new T [iSize];
    }
template<class T>
   ArrayX<T>:: ~ArrayX()
    {
        delete[]Arr;
    }
template<class T>
    void ArrayX<T>:: Accept()
    {
        int i=0;
        cout<<"Enter the elements:\n";
        for(i=0;i<iSize;i++)
        {
            cin>>Arr[i];
        }

    }
template<class T>
    void ArrayX<T>::Display()
    {
        int i=0;
        cout<<"entered elements are: \n";
        for(i=0;i<iSize;i++)
        {
            cout<<Arr[i]<<endl;
        }

    }
    template<class T>
    T ArrayX<T>::Addition()
    {
        T sum=0;
        int i=0;
        for(i=0;i<iSize;i++)
        {
            sum=sum+Arr[i];
        }

        return sum;
    }
int main()
{
   //ArrayX <int>aobj(5);//solution of error in next program
  ArrayX <int>*iobj=new ArrayX<int>(5);

   int iRet=0;

   iobj->Accept();
   iobj->Display();
   iRet=iobj->Addition();
   cout<<"addition is :"<<iRet<<endl;

   ArrayX <float>*fobj=new ArrayX<float>(5);

   float fRet=0;

   fobj->Accept();
   fobj->Display();
   fRet=fobj->Addition();
   cout<<"addition is :"<<fRet<<endl;

   return 0;


}
