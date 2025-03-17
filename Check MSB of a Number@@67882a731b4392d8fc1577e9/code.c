#include<stdio.h>
#define BITS (sizeof(int))*8
int main(){
    int num,b;
    scanf("%d",&num);
    b= 1 << (num-1);
    if(num&b){
        printf("Set");
    }   
    else{
        printf("Not Set");
    }
}