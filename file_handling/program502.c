#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0;

    fd=creat("Marvellous.txt",0777);//file name,octal no.
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