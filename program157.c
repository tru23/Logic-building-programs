#include<stdio.h>

void swap(int *p,int *q)
{
    int temp=0;

    temp=*p; //temp=A
    *p=*q;   //A=B
    *q=temp; //B=A
}

int main(){
    int A=0;
    int B=0;

    printf("enter A: ");
    scanf("%d",&A);

    printf("enter B: ");
    scanf("%d",&B);

    swap(&A,&B);

    printf("value of A is:%d \n",A);
    printf("value of B is %d :",B);

}