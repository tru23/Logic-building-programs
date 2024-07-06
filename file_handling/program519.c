
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd=0;
    char FileName[30];
    char Buffer[100]={'\0'};
    int iRet=0;
    int i=0;
    int iCount;
    char ch={'\0'};

    printf("enter the file name you want to open: \n");
    scanf("%s",FileName);

getchar();
    printf("Enter the character that you want to search:\n");
    scanf("%c",&ch);

    fd=open(FileName,O_RDWR);//file name,mode in which you want to open.
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }
    //jo parenta file madhla data 0 hot nahi to parenta
    while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
    {
       
       for(i=0;i<iRet;i++)
       {
        if(Buffer[i]==ch)
        {
            iCount++;
        }
       }

    }
    printf("Number of %c elements %d\n",ch,iCount);
   
   
    close(fd);
   
    return 0;

}