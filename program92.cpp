#include<iostream>

using namespace std;

int SumFactors(int iNo)
{
int i=0;
int sum=0;
for(i=0;i<=iNo;i++)
{
    if((iNo%i==0))
    {
        
        sum=sum+i;
    }
}
return sum;
}

int main()
{
    int iValue=0;
    int iRet=0;
    cout<<"enter number:"<<endl;
    cin>>iValue;
    iRet=SumFactors(iValue);

    cout<<"summation of factors is:"<<iRet<<endl;

    return 0;
}