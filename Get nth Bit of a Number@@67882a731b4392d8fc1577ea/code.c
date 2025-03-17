#include<stdio.h>
int main(){
    int num,b,n;
    scanf("%d",&num);
    n=sizeof(b);
    b= n << (num);
    if(num&b){
        printf("Set");
    }   
    else{
        printf("Not Set");
    }
}