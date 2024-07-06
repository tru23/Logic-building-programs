#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    char FileName[30];

    printf("enter the file name you want to create: \n");
    scanf("%s",FileName);

    fd=creat(FileName,0777);//file name,octal no.
    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else 
    {
        printf("file created successfully %d\n",fd);
    }

    return 0;

}