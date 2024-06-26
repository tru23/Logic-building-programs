#include <iostream>
using namespace std;

int Display(int iNo)
{
    static int sum = 0;
    static int i = 0;
    
    if (i <= iNo)
    {
        sum = sum + i;
        i++;
        Display(iNo);
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