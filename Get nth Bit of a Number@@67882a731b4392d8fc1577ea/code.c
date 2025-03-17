#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c= 1 << (b);
    if(a&b){
        printf("Set");
    }   
    else{
        printf("Not Set");
    }
}