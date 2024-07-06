#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd=0;
    char FileName[30];
    char Arr[100]={'\0'};//to avooid garbage value
    int iRet=0;

    printf("enter the file name you want to open: \n");
    scanf("%s",FileName);

    fd=open(FileName,O_RDWR | O_APPEND);//file name,mode in which you want to open.
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }
   iRet=read(fd,Arr,10);// 10 mhnaje te 1 te 10 pareta read karel 

   printf("nummber of bytes successfully read from file: %d\n",iRet);
   printf("data from file is: %s\n",Arr);//1 te 10 parenta print karel
    
    iRet=read(fd,Arr,10);// 10 mhnaje te 10 te 20 pareta read karel 

   printf("nummber of bytes successfully read from file: %d\n",iRet);
   printf("data from file is: %s\n",Arr);//10te 20 parenta print karel
    return 0;

}