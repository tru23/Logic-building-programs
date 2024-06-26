#include<iostream>

using namespace std;

int SumDifference(int iNo)
{
int digit=0;
int sumE=0;
int sumO=0;

while(iNo!=0)
{
    digit=iNo%10;
    if((digit%2)==0)
    {
        sumE=sumE+digit;
    }
    else{
        sumO=sumO+digit;
    }

    iNo=iNo/10;

}
return sumE-sumO;
}

int main()
{
    int iValue=0;
    int iRet=0;
    cout<<"enter number:"<<endl;
    cin>>iValue;
    iRet=SumDifference(iValue);

    cout<<"Difference  is:"<<iRet<<endl;

    return 0;
}