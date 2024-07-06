#include<iostream>
using namespace std;

//every error are resolved in next program

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
ArrayX::ArrayX(int no)
    {
        iSize=no;
        Arr=new T [iSize];
    }

   ArrayX:: ~ArrayX()
    {
        delete[]Arr;
    }

    void ArrayX:: Accept()
    {
        int i=0;
        cout<<"Enter the elements:\n";
        for(i=0;i<iSize;i++)
        {
            cin>>Arr[i];
        }

    }

    void ArrayX::Display()
    {
        int i=0;
        cout<<"entered elements are: \n";
        for(i=0;i<iSize;i++)
        {
            cout<<Arr[i]<<endl;
        }

    }
    T ArrayX::Addition()
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
   ArrayX aobj(5);//solution of error in next program
   int iRet=0;

   aobj.Accept();
   aobj.Display();
   iRet=aobj.Addition();
   cout<<"addition is :"<<iRet<<endl;

   return 0;


}
