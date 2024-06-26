#include<stdio.h>
#include<stdbool.h>
bool CheckPrime(int iNo){
 

    if(iNo%2==0)
      {
        return false;
      }
    else{
        return true;
      }

}

int main(){
    int iValue=0;
    bool bRet=false;

    printf("enter number: \n");
    scanf("%d",&iValue);

    bRet=CheckPrime(iValue);
    if(bRet==true)
    {
        printf("%d is a prime number\n",iValue);

    }
    else{
        printf("%d is not a prime number \n",iValue);
    }
    return 0;
} 
