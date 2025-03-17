#include<stdio.h>
int main(){
    int num,b,n;
    scanf("%d",&num);
    scanf("%d",&n);
    b= 1 << (n);
    if(num&b){
        printf("Set");
    }   
    else{
        printf("Not Set");
    }
}