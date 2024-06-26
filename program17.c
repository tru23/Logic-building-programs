#include<stdio.h>

void display(int num){
int i=1;
 while(i<=num){
      
        printf(" %d \n",i);//i*2,I*3...
        i++;
    }

}

int main(){
    int n=0;
    printf("enter how much number you want to display");
    scanf("%d",&n);
    display(n);
    
    
    
    
    return 0;

}