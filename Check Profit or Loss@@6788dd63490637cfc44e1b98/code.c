#include <stdio.h>
int main(){
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    if(cp>sp){
        printf("Loss");
    }
    else if(cp==sp){
        printf("No Profit No Loss");
    }
    else if (cp<sp){
        printf("Profit");
    }
    return 0;
}