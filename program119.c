#include<stdio.h>

void strlwrX(char* str)
{
    while(*str !='\0')
    {
        if((*str>='a') &&(*str<='z')){
        (*str)=(*str)-32;
        
        }
        else if((*str>='A') &&(*str<='Z')){
        (*str)=(*str)+32;
        
        }

        str++;
    }
}

int main(){

    char Arr[30];
    printf("enter string:\n");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("entered string is %s",Arr);
}