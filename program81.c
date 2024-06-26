#include<stdio.h>
#include<stdbool.h>
#define True 1
#define False 0 
bool CheckOcc(char *str)
{
   
    while(*str !='\0')//  \0 is when we press enter  
    {
        if((*str=='w'||*str=='W'))
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
    printf("enter string:\n");
    scanf("%[^'\n']s",Arr);

    bRet=CheckOcc(Arr); //strlenX(100)
  if(bRet==1){
    printf("w is present");
  }
  else{
    printf("no w is present");
  }
    return 0;
}