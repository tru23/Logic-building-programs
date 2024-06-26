#include<stdio.h>


int main()
{
    unsigned int iNo1=0;
    unsigned int Mask=8;
    unsigned int result=0;
  

    printf("enter first  number: ");
    scanf("%u",&iNo1);

    result=iNo1 & Mask;

    if(result==Mask){
        printf("4th bit is ON");
    }
    else{
        printf("4th bit is OFF");
    }
    

   return 0;
}


