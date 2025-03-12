#include<stdio.h>
int main(){
    int i,j,n,a=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}