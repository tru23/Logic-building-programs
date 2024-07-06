#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    char FileName[30];

    printf("enter the file name you want to open: \n");
    scanf("%s",FileName);

    fd=open(FileName,O_RDWR);//file name,mode in which you want to open.
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else 
    {
        printf("file is opened  successfully fd  %d\n",fd);
    }

    return 0;

}