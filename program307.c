#include<stdio.h>
#include<stdbool.h>

bool CheckBit( int iNo1){
    unsigned int Mask=8;
    unsigned int result=0;
    result=iNo1 & Mask;

    if(result==Mask){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    unsigned int iNo1=0;
    bool bRet=false;
  

    printf("enter first  number: ");
    scanf("%u",&iNo1);

    bRet=CheckBit(iNo1);

    if(bRet==true)
    {
        printf("4th bit is ON\n");
    }
    else{
        printf("4th Bit is OFF");
    }
    

   return 0;
}


