#include<stdio.h>
#include<stdbool.h>

int displayResult(float marks)
{   if((marks<0.0f)||(marks>100.0f)){
    return 1;
}
    if((marks>=0.0f) && (marks<35.0f))
    {
        return 2;
    }
    else{
        return 3 ;
    }
}

int main()
{
    int fValue=0.0f;
    int iRet=0;

    printf("entsr percentage");
    scanf("%d",&fValue);

    iRet=displayResult(fValue);
    if(iRet == 1){
        printf("INVALID\n");
    }
    else if (iRet==2){
        printf("FAIL\n");
    }
    else if(iRet==3){
        printf("PASSS\n");

    }
return 0;


}