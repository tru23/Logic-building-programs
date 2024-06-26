#include <iostream>
using namespace std;

int Display(int iNo)
{
    int sum = 0;
    int i = 0;
    while (i <= iNo)
    {
        sum = sum + i;
        i++;
    }

    return sum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    cout << "enter number" << endl;
    cin >> iValue;

    iRet = Display(iValue); // function call
    printf("sum is %d ", iRet);

    return 0;
}