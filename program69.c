#include<stdio.h>

// do not use this syntax use from program 70
void Display(int *ptr,int iSize)
{
    for(int i=0;i<iSize;i++,ptr++)
    {
        printf("%d\n",*ptr);
        
  }
}
int main()
{
int Arr[5]={10,20,30,40,50};//static representarion of array 

Display(Arr,5);//Display(100)
    return 0;
}