#include<stdio.h>


int main()
{
    unsigned int iNo1=0;
    unsigned int iNo2=0;
    unsigned int iRet=0;

    printf("enter first  number: ");
    scanf("%d",&iNo1);

 printf("enter second  number: ");
    scanf("%d",&iNo2);

    iRet=iNo1 ^ iNo2;
    printf("Result of bitwise operator %d:",iRet);

   return 0;
}

/*
 iNo1   11      0 0 0 0 1 0 1 1
 iNo2   15      0 0 0 0 1 1 1 1
              --------------------^
                0 0 0 0 0 1 0 0 ------15



 No1    67      0 1 0 0 0 0 1 1
 iNo2   34      0 0 1 0 0 0 1 0
              --------------------^
                0 1 1 0 0 0 0 1-----97
*/               


