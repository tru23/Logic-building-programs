#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd=0;
    char FileName[30];
    char Arr[100];

    printf("enter the file name you want to open: \n");
    scanf("%s",FileName);

    fd=open(FileName,O_RDWR);//file name,mode in which you want to open.
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }
     getchar();
    printf("enter data you wnat to add to file\n");
    scanf("%[^\n]s",Arr);

    write(fd,Arr,strlen(Arr));//11 is no of length in string Hello World
    
    return 0;

}