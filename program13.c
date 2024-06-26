#include<stdio.h>
#include<stdbool.h>

#define RET_INVALID -1
#define RET_FAILCLASS 1
#define RET_PASSCLASS 2
#define RET_SECONDCLASS 3
#define RET_FIRSTCLASS 4
#define RET_FCWITHDIC 5



int displayResult(float marks)
{   if((marks<0.0f)||(marks>100.0f)){
    return RET_INVALID;
}
    if((marks>=0.0f) && (marks<35.0f))
    {
        return RET_FAILCLASS;
    }
    else if((marks>=35)&&(marks<50)){
        return RET_PASSCLASS;
    }
    else if((marks>=50)&&(marks<60)){
        return RET_SECONDCLASS;
    }
    else if((marks>=60)&& (marks<75)){
        return RET_FIRSTCLASS;
    }
    else if((marks>=75 && (marks<=100))){
        return RET_FCWITHDIC;
    }
}

int main()
{
    int fValue=0.0f;
    int iRet=0;

    printf("entsr percentage");
    scanf("%d",&fValue);

    iRet=displayResult(fValue);
    switch (iRet)
    {
    case RET_FAILCLASS:
        printf("FAIL CLASS\n");
        break;
    case RET_PASSCLASS:
        printf("PASS CLASS\n");
        break;
    case RET_SECONDCLASS:
        printf("SECOND CLASS\n");
        break;
    case RET_FIRSTCLASS:
        printf("FIRST CLASS\n");
        break;
    case RET_FCWITHDIC:
        printf("WITH DISTINTION\n");
        break;
        
    case RET_INVALID:
        printf("INVALID\n");
        break;
    }
return 0;


}