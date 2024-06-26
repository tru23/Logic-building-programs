#include<stdio.h>
#include<stdbool.h>
#define True 1
#define False 0 
bool CheckOcc(char *str,char ch)
{
   
    while(*str !='\0')//  \0 is when we press enter  
    {
        if(*str==ch)
        {
            return 1;
        }
        
        str++;
    }
  return 0;  
}
int main()
{
    char Arr[100];//static memmory allocation 
    bool bRet=false;
    char cValue;

    printf("enter string:\n");
    scanf("%[^'\n']s",Arr);

    printf("enter apbhabet you want to search=");
    scanf(" %c",&cValue);

    bRet=CheckOcc(Arr,cValue); //strlenX(100)
  if(bRet==1){
    printf("char is present");
  }
  else{
    printf("char is not  present");
  }
    return 0;
}