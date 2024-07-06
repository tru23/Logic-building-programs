#include<iostream>
using namespace std;

class ArrayX
{
    public:
    int *Arr;
    int iSize;

    ArrayX(int no)
    {
        iSize=no;
        Arr=new int [iSize];
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
        int sum=0;
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
   ArrayX aobj(5);
   int iRet=0;

   aobj.Accept();
   aobj.Display();
   iRet=aobj.Addition();
   cout<<"addition is :"<<iRet<<endl;

   return 0;


}
