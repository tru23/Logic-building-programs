#include<stdio.h>

void display(int num){

 for(int i=1;i<=num;i++){
      
        printf(" %d \n",i);
    }

}

int main(){
    int n=0;
    printf("enter how much number you want to display");
    scanf("%d",&n);
    display(n);
    
    
    
    
    return 0;

}