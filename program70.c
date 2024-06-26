#include<stdio.h>

//remove star and add []in ptr  acts same as pointer.
//use this syntax 
//void Display(int *ptr,int iSize) same 
void Display(int ptr[],int iSize)
{
    for(int i=0;i<iSize;i++)
    {
        printf("%d\n",ptr[i]);
      //printf("%d\n",*(ptr+i));  
  }
}
int main()
{
int Arr[5]={10,20,30,40,50};//static representarion of array 

Display(Arr,5);//Display(100)
    return 0;
}