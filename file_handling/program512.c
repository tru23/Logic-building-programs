#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024
//to avoid the error in previous =shoes extra data than file at last
int main()
{
    int fdRead=0,fdWrite=0;
    char FileName[30];
    char Buffer[BUFFER_SIZE]={'\0'}; //1024=1kb  
    int iRet=0;
    

    printf("enter the existing file name you want to open: \n");
    scanf("%s",FileName);

    fdRead=open(FileName,O_RDWR);//file name,mode in which you want to open.
    if(fdRead == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }

    printf("enter the name of file you want to create\n");
    scanf("%s",FileName);

    fdWrite=creat(FileName,0777);

    if(fdWrite== -1)
    {
        printf("unable to create new file");
        return 0;
    }
   


    //jo parenta file madhla data 0 hot nahi to parenta
    while((iRet=read(fdRead,Buffer,sizeof(Buffer)))!=0)
    {
        write(fdWrite,Buffer,iRet);
        memset(Buffer,0,sizeof(Buffer));
    }
   
    close(fdRead);
    close(fdWrite);
   
    return 0;

}