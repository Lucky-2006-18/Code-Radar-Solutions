#include<stdio.h>
int main(){
   int i,j,k,n;
   scanf("%d",&n);
   for(i=1;i<=n;i++){
      for(j=i;j<=n;j++){
         printf(" ");
      }
      for(k=0;k<i;k++){
         printf("*");
      }
      for(k=1;k<i;k++){
         printf("*");
      }
      printf("\n");
   }
}