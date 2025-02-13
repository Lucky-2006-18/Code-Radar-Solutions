#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    scanf("%f%f",&a,&b);
    c=pow(a,0.5);
    if(b==c){
    printf("Yes");
    }
    else{
    printf("No");
    }
     return 0;
}