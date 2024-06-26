#include<iostream>

using namespace std;

class Arithmatic
{
    public:
    int iNo1;//characterists
    int iNo2;

    Arithmatic(int A,int B)//parametrised constructor
    {
        iNo1=A;
        iNo2=B;

    }
    int Addition()//function
    {
        int iAns=0;
        iAns=iNo1+iNo2;
        return iAns;
    }

};

int main()
{
    int iValue=0,iValue2=0;
    int iRet=0;

    cout<<"enter first number:"<<endl;
    cin>>iValue;
cout<<"enter second number:"<<endl;
    cin>>iValue2;

    Arithmatic aobj(iValue,iValue2);

    iRet=aobj.Addition();

    cout<<"Addition is: "<<iRet<<endl;

}
