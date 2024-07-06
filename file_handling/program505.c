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
    
    write(fd,"Hello World",11);//11 is no of char in string Hello World
    


    return 0;

}