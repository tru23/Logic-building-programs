#include<stdio.h>


void Display(int n){
    
    int i=1;
    while(i<=n){
       
        printf(" jai hanuman \n");
        i++;
    }
}

int main(){
   int num=0;
   printf("enter number of times you want to print--");
   scanf("%d",&num);
   Display(num);



    return 0;
}