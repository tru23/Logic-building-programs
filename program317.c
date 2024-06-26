#include<stdio.h>


void CheckBit( int iNo1){
    unsigned int Mask=0x00000008;
    unsigned int result=0;
    result=iNo1 ^ Mask;

    printf("updated is %u ",result);
}
int main()
{
    unsigned int iNo1=0;
    
  

    printf("enter first  number: ");
    scanf("%u",&iNo1);

    CheckBit(iNo1);

    

   return 0;
}

