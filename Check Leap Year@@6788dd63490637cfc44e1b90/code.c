#include <stdio.h>
int main(){
    int yr;
    scanf("%d",&yr);
    if(yr==1900){
        printf("Not a Leap Year");
    }
    else{
    if(yr%4==0)
    printf("Leap Year");
    else
    printf("Not a Leap Year");
    }
    return 0;
}