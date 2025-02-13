#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=(int)pow(a,0.5);
    if(b==c){
    printf("Yes");
    }
    else{
    printf("No");
    }
     return 0;
}