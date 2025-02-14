#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num==2){
        printf("28");
    }
    else if(num>13){
        printf("Invalid month");
    }
    else if(num==12){
        printf("31");
    }
    else{
        if(num%2!=0){
            printf("31");
        }
        else{
            printf("30");
        }
    }
    return 0;
}